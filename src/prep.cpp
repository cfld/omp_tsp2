// prep.cpp

#include <iostream>
#include <fstream>
#include <string.h>
#include "main.h"
#include "helpers.h"

Int* buff;
Int* idx;

namespace prep {
    int idx_cmp(const void *a, const void *b) {
        int ia = *(int *)a;
        int ib = *(int *)b;
        if(buff[ia] > buff[ib]) {
            return 1;
        } else if(buff[ia] < buff[ib]) {
            return -1;
        } else {
            return (ia > ib) ? 1 : -1;
        }
    }

    void load_problem(Int *n_nodes_, Int*** dist_, Int*** near_, Int n_near) {
        std::ifstream prob("prob", std::ios::in | std::ios::binary);    
        
        // n_nodes
        Int n_nodes;
        prob.read((char*)&n_nodes, sizeof(n_nodes));
        
        // dist + near
        buff = (Int *)malloc(n_nodes * sizeof(Int));
        idx  = (Int *)malloc(n_nodes * sizeof(Int));

        Int** dist;
        malloc2d(&dist, n_nodes, n_nodes);

        Int** near;
        malloc2d(&near, n_nodes, n_near);

        for (Int r = 0; r < n_nodes; r++) {
            prob.read((char*)buff, sizeof(Int) * n_nodes);

            memcpy(dist[r], buff, n_nodes * sizeof(Int));
            
            for(Int c = 0; c < n_nodes; c++) {
                idx[c] = c;
            }
            qsort(idx, n_nodes, sizeof(Int), idx_cmp);
            memcpy(near[r], idx + 1, n_near * sizeof(Int));
        }

        *n_nodes_ = n_nodes;
        *dist_    = dist;
        *near_    = near;

        free(buff);
        free(idx);
    }
}
