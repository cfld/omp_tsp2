// perturb.cpp

#include <stdlib.h>
#include <stdio.h> 
#include <string.h>

#include "main.h"

namespace perturb {
    int cmp_Int(const void *a,const void *b) {
        int *x = (int *) a;
        int *y = (int *) b;
        return *x - *y;
    }
    
    void double_bridge_kick(Int *pos2node, Int n_nodes) {
        Int breaks[4] = {0, 0, 0, 0};
        for(int i = 0; i < 4; i++) {
            breaks[i] = (rand() % (n_nodes - 1)) + 1;
        }
        qsort(breaks, 4, sizeof(Int), cmp_Int);

        Int* tmp = (Int *)malloc(n_nodes * sizeof(Int));
        Int offset = 0;

        // zero
        memcpy(tmp + offset, pos2node, breaks[0] * sizeof(Int));
        offset += breaks[0];

        // three
        memcpy(tmp + offset, pos2node + breaks[2], (breaks[3] - breaks[2]) * sizeof(Int));
        offset += breaks[3] - breaks[2];

        // two
        memcpy(tmp + offset, pos2node + breaks[1], (breaks[2] - breaks[1]) * sizeof(Int));
        offset += breaks[2] - breaks[1];
        
        // one
        memcpy(tmp + offset, pos2node + breaks[0], (breaks[1] - breaks[0]) * sizeof(Int));
        offset += breaks[1] - breaks[0];

        // four
        memcpy(tmp + offset, pos2node + breaks[3], (n_nodes - breaks[3]) * sizeof(Int));

        memcpy(pos2node, tmp, n_nodes * sizeof(Int));

        free(tmp);
    }
}