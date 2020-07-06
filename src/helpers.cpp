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

void malloc2d(Int*** x_, Int r, Int c) {
    Int** x = (Int **)malloc(sizeof(Int*) * r + sizeof(Int) * r * c);
    for(Int i = 0; i < r; i++)
        x[i] = ((Int *)(x + r) + c * i);

    *x_ = x;
}