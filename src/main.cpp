// main.cpp

#include <omp.h>
#include <stdio.h> 
#include <stdlib.h> 
#include <unistd.h>
#include <bits/stdc++.h> // shuffle
#include <time.h>

#include "main.h"
#include "helpers.h"
#include "prep.h"
#include "lk.h"
#include "perturb.h"
#include "parser.h"

int main(int argc, char* argv[]) { 
    srand(12345);

    // --
    // CLI
    
    Int n_near       = 10;      // number of neighbors for shortlisting
    Int max_depth    = 5;       // maximum number of edge edits in k-opt move
    int n_threads    = 1;       // number of OMP threads
    int n_reps       = 1;       // number of replicas (n_reps and n_threads should be equal, except for benchmarking purposes)
    int outer_iters  = 1;       // number of synchronizations between threads
    int inner_iters  = 10;      // number of perturbations between synchronization between threads
    int quiet        = 0;       // print logs?
    Int lk_max_moves = INT_MAX; // number of k-opt moves executed by one call to `lk_solve` (for benchmarking only)
    
    parse_cmd(argc, argv, max_depth, n_near, n_threads, n_reps, outer_iters, inner_iters, quiet, lk_max_moves);
    
    int steps = outer_iters * n_reps * inner_iters;

    if(!quiet) {
        printf("----------------\n");
        printf("max_depth   %ld \n",  max_depth);
        printf("n_near      %ld \n",  n_near);
        printf("n_threads   %d  \n",  n_threads);
        printf("n_reps      %d  \n",  n_reps);
        printf("outer_iters %d  \n",  outer_iters);
        printf("inner_iters %d  \n",  inner_iters);
        printf("steps       %d  \n",  steps);
        printf("quiet       %d  \n",  quiet);
        printf("----------------\n");
    }

    omp_set_num_threads(n_threads);

    // --
    // IO
    
    Int n_nodes;
    Int **dist;
    Int **near;
    prep::load_problem(&n_nodes, &dist, &near, n_near);
    
    int route_bytes = n_nodes * sizeof(Int);

    // --
    // Init route (simply, for now)

    Int* global_route = (Int*)malloc(route_bytes);
    for(Int i = 0; i < n_nodes; i++) {
        global_route[i] = i;
    }

    Int global_cost = route2cost(global_route, dist, n_nodes);
    if(!quiet) {
        printf("n_nodes:   %ld\n", n_nodes);
        printf("init_cost: %lu\n", global_cost);
        printf("--------------\n");
    }

    // --
    // Data structures for workers

    Int *costs = (Int*)malloc(n_reps * sizeof(Int));

    Int** routes;
    malloc2d(&routes, n_reps, n_nodes);

    Int** best_routes;
    malloc2d(&best_routes, n_reps, n_nodes);
    
    double start_time = get_time_ms();
    
    // --
    // Run optimization
    
    for(int outer_it = 0; outer_it < outer_iters; outer_it++) {
        #pragma omp parallel for
        for(int rid = 0; rid < n_reps; rid++) {
            srand(int(time(0)) ^ (rid + outer_it));

            costs[rid] = global_cost;
            memcpy(routes[rid], global_route, route_bytes);
            memcpy(best_routes[rid], global_route, route_bytes);

            for(int inner_it = 0; inner_it < inner_iters; inner_it++) {
                perturb::double_bridge_kick(routes[rid], n_nodes);
                lk_solve(dist, near, routes[rid], max_depth, n_nodes, n_near, lk_max_moves);
                Int cost = route2cost(routes[rid], dist, n_nodes);

                if(cost < costs[rid]) {
                    costs[rid] = cost;
                    memcpy(best_routes[rid], routes[rid], route_bytes);
                } else {
                    memcpy(routes[rid], best_routes[rid], route_bytes);
                }
                if(!quiet) {
                    printf("rid: %02d | outer_it: %03d | inner_it: %03d | costs[rid]: %ld | global_cost: %ld | elapsed: %f \n", 
                        rid, outer_it, inner_it, costs[rid], global_cost, (get_time_ms() - start_time));
                }
            }
        }

        int best_idx = -1;
        for(int i = 0; i < n_reps; i++) {
            if(costs[i] < global_cost) {
                global_cost = costs[i];
                best_idx    = i;
            }
        }

        if(best_idx != -1) {
            memcpy(global_route, routes[best_idx], route_bytes);
        }
    }

    if(!quiet) printf("----------------------------\n");
    printf("global_cost:  %ld | elapsed: %f | steps: %d \n", global_cost, (get_time_ms() - start_time), steps);
}