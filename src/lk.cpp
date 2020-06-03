// lk.cpp

// Compute sequential k-opt moves

#include <string.h>
#include <stdio.h>
#include <cstdlib>

#include "main.h"
#include "helpers.h"
#include "lk_checkers.h"

bool edge_exists(Int u, Int v, Int n) {
    if(u == v + 1)                 return true;
    else if(v == u + 1)            return true;
    else if(u == 0 and v == n - 1) return true;
    else if(v == 0 and u == n - 1) return true;
    else return false;
}

bool contains(Int u, Int v, Int* db, Int depth) {
    for(Int i = 0; i < depth; i++) {
        if(u == db[2 * i] && v == db[2 * i + 1]) return true;
        if(v == db[2 * i] && u == db[2 * i + 1]) return true;
    }
    return false;
}

int fix_csh(Int rev, Int x, Int fin, Int n_nodes) {
    if(rev) {
        if(x > fin) return x - fin;
        else        return n_nodes + (x - fin);
    } else {
        if(x > fin) return n_nodes - (x - fin);
        else        return (fin - x);
    }
}

int _lk_move(Int** dist, Int** near, Int* pos2node, Int* node2pos, Int* cs, Int* csh, Int* new_edges, Int* old_edges, Int saving, Int n_nodes, Int n_near, Int depth, Int max_depth) {
    Int fin  = cs[0];
    Int act  = cs[2 * depth + 1];
    bool rev = mod(cs[1] - fin, n_nodes) == 1;

    Int cp1, cp2;

    Int* act_near_pos = near[pos2node[act]];
    for(Int i = 0; i < n_near; i++) {
        cp1 = node2pos[act_near_pos[i]];
        
        // if(cp1 == -1)                            continue;
        if(cp1 == fin)                           continue;
        if(cp1 == act)                           continue;
        if(edge_exists(act, cp1, n_nodes))       continue;
        if(contains(act, cp1, new_edges, depth)) continue;

        Int saving_n23 = saving - dist[pos2node[act]][pos2node[cp1]]; // add 23

        if(saving_n23 > 0) {
            for(int dir = 0; dir <= 1; dir++) {
                cp2 = dir == 0 ? mod(cp1 - 1, n_nodes) : mod(cp1 + 1, n_nodes);

                // if(cp2 == -1)                            continue;
                if(cp2 == fin)                               continue;
                if(contains(cp1, cp2, old_edges, depth + 1)) continue;

                new_edges[2 * depth]           = act;
                new_edges[2 * depth + 1]       = cp1;
                old_edges[2 * (depth + 1)]     = cp1;
                old_edges[2 * (depth + 1) + 1] = cp2;
                cs[2 * (depth + 1)]            = cp1;
                cs[2 * (depth + 1) + 1]        = cp2;
                csh[2 * (depth + 1)]           = fix_csh(rev, cp1, fin, n_nodes);
                csh[2 * (depth + 1) + 1]       = fix_csh(rev, cp2, fin, n_nodes);

                Int saving_n23_o34 = saving_n23 + dist[pos2node[cp1]][pos2node[cp2]]; // remove 34

                if(!edge_exists(cp2, fin, n_nodes)) {
                    Int saving_closed = saving_n23_o34 - dist[pos2node[cp2]][pos2node[fin]];
                    if(saving_closed > 0) {
                        if(depth == 0) {
                            if(check2(csh)) return depth;
                        } else if (depth == 1) {
                            if(check3(csh)) return depth;
                        } else if (depth == 2) {
                            if(check4(csh)) return depth;
                        } else if (depth == 3) {
                            if(check5(csh)) return depth;
                        }   
                    }
                }

                if(depth < max_depth - 2) {
                    Int deeper = _lk_move(dist, near, pos2node, node2pos, cs, csh, new_edges, old_edges, saving_n23_o34, n_nodes, n_near, depth + 1, max_depth);
                    if(deeper != -1) {
                        return deeper;
                    }
                }
            }
        }
    }
    return -1;
}

void execute_move(Int *cs, Int depth, Int* pos2node, Int* node2pos, Int* pres, Int* sucs, Int n_nodes, bool* active) {
    Int cs_length = 2 * (depth + 2);

    Int a, b, c;
    Int max_cs = -1;
    Int min_cs = 99999;
    for(Int i = 0; i < cs_length; i++) {
        
        a = pos2node[cs[mod(i - 1, cs_length)]];
        b = pos2node[cs[i]];
        c = pos2node[cs[mod(i + 1, cs_length)]];

        if(i % 2 == 1) {
            if(pres[b] == a) pres[b] = c;
            if(sucs[b] == a) sucs[b] = c;
        } else {
            if(pres[b] == c) pres[b] = a;
            if(sucs[b] == c) sucs[b] = a;
        }

        if(cs[i] > max_cs) max_cs = cs[i];
        if(cs[i] < min_cs) min_cs = cs[i];
        
        active[b] = true;
    }

    Int last = pos2node[mod(min_cs - 1, n_nodes)];
    Int curr = pos2node[min_cs];
    
    for(Int step = min_cs; step < max_cs + 1; step++) {
        pos2node[step] = curr;
        node2pos[curr] = step;
        if(pres[curr] != last) {
            last = curr;
            curr = pres[curr];
        } else {
            last = curr;
            curr = sucs[curr];
        }
    }
}

bool lk_move(Int** dist, Int** near, Int* pos2node, Int* node2pos, Int* pres, Int* sucs, Int n_nodes, Int n_near, Int c1, Int c2, Int max_depth, bool* active) {

    Int* cs        = (Int *)malloc(2 * max_depth * sizeof(Int));
    Int* csh       = (Int *)malloc(2 * max_depth * sizeof(Int));
    Int* new_edges = (Int *)malloc(2 * (max_depth - 1) * sizeof(Int));
    Int* old_edges = (Int *)malloc(2 * max_depth * sizeof(Int));
    
    cs[0]  = c1;
    cs[1]  = c2;
    csh[0] = 0;
    csh[1] = 1;
    
    old_edges[0] = c1;
    old_edges[1] = c2;

    Int sav   = dist[pos2node[c1]][pos2node[c2]];
    Int depth = _lk_move(dist, near, pos2node, node2pos, cs, csh, new_edges, old_edges, sav, n_nodes, n_near, 0, max_depth);

    if(depth != -1)
        execute_move(cs, depth, pos2node, node2pos, pres, sucs, n_nodes, active);

    free(cs);
    free(csh);
    free(new_edges);
    free(old_edges);

    return depth != -1;
}

void lk_solve(Int** dist, Int** near, Int* pos2node, Int max_depth, Int n_nodes, Int n_near) {
    Int* node2pos = (Int *)malloc(n_nodes * sizeof(Int));
    Int* sucs     = (Int *)malloc(n_nodes * sizeof(Int));
    Int* pres     = (Int *)malloc(n_nodes * sizeof(Int));
    bool* active  = (bool *)malloc(n_nodes * sizeof(bool));

    for(Int i = 0; i < n_nodes; i++) {
        node2pos[pos2node[i]] = i;
        pres[pos2node[i]]     = pos2node[mod(i - 1, n_nodes)];
        sucs[pos2node[i]]     = pos2node[mod(i + 1, n_nodes)];
        active[pos2node[i]]   = true;
    }

    Int c1, c2;
    bool any_improved = true;
    while(any_improved) {

        any_improved = false;
        for(Int node = 0; node < n_nodes; node++) {
            if (active[node]) {
                active[node] = false;

                c1 = node2pos[node];
                
                for(int dir = 0; dir <= 1; dir++) {
                    c2 = (dir == 0) ? mod(c1 - 1, n_nodes) : mod(c1 + 1, n_nodes);
                    
                    if(lk_move(dist, near, pos2node, node2pos, pres, sucs, n_nodes, n_near, c1, c2, max_depth, active)) {
                        any_improved = true;
                        break;
                    }
                }
            }
        }
    }

    free(node2pos);
    free(sucs);
    free(pres);
    free(active);
}