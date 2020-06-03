// helpers.cpp

#include <cstddef>
#include <sys/time.h>
#include <stdlib.h>
#include "main.h"

double get_time_ms() {
    struct timeval t;
    gettimeofday(&t, NULL);
    return (t.tv_sec + (t.tv_usec / 1000000.0)) * 1000.0;
}

int mod(Int a, Int b) {
    if (a > 0 && a < b)   return a;
    if (a == 0 || a == b) return 0;
    if (a == -1)          return b - 1;

    Int r = a % b;
    return r < 0 ? r + b : r;
}

Int route2cost(Int* route, Int** dist, Int n_nodes) {
    Int cost = dist[route[n_nodes - 1]][route[0]];
    for(Int i = 1; i < n_nodes; i++) {
        cost += dist[route[i - 1]][route[i]];
    }
    return cost;
}

void malloc2d(Int*** x_, Int r, Int c) {
    Int** x = (Int **)malloc(sizeof(Int*) * r + sizeof(Int) * r * c); 
    for(Int i = 0; i < r; i++) 
        x[i] = ((Int *)(x + r) + c * i); 
    
    *x_ = x;
}