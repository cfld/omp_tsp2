// mtest.cpp
// compile with
// g++ -std=c++11 -Wall -O3 -fopenmp -o mtest mtest.cpp

#include <stdlib.h>
#include <stdio.h> 
#include <string.h>
#include <sys/time.h>

typedef double Real;

double get_time() {
    struct timeval t;
    gettimeofday(&t, NULL);
    return (t.tv_sec + (t.tv_usec / 1000000.0)) * 1000.0;
}

void malloc2d(Real*** x_, int r, int c) {
    Real** x = (Real **)malloc(sizeof(int*) * r + sizeof(Real) * r * c); 
    for(int i = 0; i < r; i++) 
        x[i] = ((Real *)(x + r) + c * i); 
    
    *x_ = x;
}

int main(int argc, char* argv[]) { 
    int n = 15000;
    
    // Allocate random matrix
    Real** mat;
    malloc2d(&mat, n, n);
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            Real r = (Real)rand() / (Real)(RAND_MAX);
            mat[i][j] = r;
        }
    }
    
    // Allocate output
    int* out = (int *)malloc(sizeof(int) * n); 
    for(int i = 0; i < n; i++) {
        out[i] = 0;
    }
    
    // Run function
    double start_time = get_time();
    #pragma omp parallel for
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(mat[i][j] > 0.5) {
                out[i] = i;
            }
        }
    }
    double end_time = get_time();
    printf("elapsed=%f\n", (end_time - start_time));
    
    // Print output
    for(int i = 0; i < n; i++) {
        fprintf(stderr, "%d ", out[i]);
    }
}