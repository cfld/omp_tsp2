// lk.h

#ifndef LK_H
#define LK_H

static inline bool edge_exists(Int u, Int v, Int n) {
    if(u == v + 1)                 return true;
    else if(v == u + 1)            return true;
    else if(u == 0 and v == n - 1) return true;
    else if(v == 0 and u == n - 1) return true;
    else return false;
}

static inline bool contains(Int u, Int v, Int* db, Int depth) {
    for(Int i = 0; i < depth; i++) {
        if(u == db[2 * i] && v == db[2 * i + 1]) return true;
        if(v == db[2 * i] && u == db[2 * i + 1]) return true;
    }
    return false;
}

static inline int fix_csh(Int rev, Int x, Int fin, Int n_nodes) {
    if(rev) {
        if(x > fin) return x - fin;
        else        return n_nodes + (x - fin);
    } else {
        if(x > fin) return n_nodes - (x - fin);
        else        return (fin - x);
    }
}

void lk_solve(
    Int** dist,
    Int** near,
    Int* pos2node,
    Int max_depth,
    Int n_nodes,
    Int n_near,
    Int max_moves
);

#endif