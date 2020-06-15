// lk.h

#ifndef LK_H 
#define LK_H

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