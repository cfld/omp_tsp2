// helpers.h

#ifndef HELPERS_H
#define HELPERS_H


double get_time_ms();

static inline int mod(Int a, Int b) {
    if (a > 0 && a < b)   return a;
    if (a == 0 || a == b) return 0;
    if (a == -1)          return b - 1;

    Int r = a % b;
    return r < 0 ? r + b : r;
}

static inline Int route2cost(Int* route, Int** dist, Int n_nodes) {
    Int cost = dist[route[n_nodes - 1]][route[0]];
    for(Int i = 1; i < n_nodes; i++) {
        cost += dist[route[i - 1]][route[i]];
    }
    return cost;
}

void malloc2d(Int*** x_, Int r, Int c);

#endif