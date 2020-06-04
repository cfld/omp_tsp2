#!/bin/bash

g++ -std=c++11 -Wall -O3 -fopenmp -o mtest mtest.cpp

OMP_NUM_THREADS=1 ./mtest 2>/dev/null
OMP_NUM_THREADS=2 ./mtest 2>/dev/null
OMP_NUM_THREADS=4 ./mtest 2>/dev/null
OMP_NUM_THREADS=8 ./mtest 2>/dev/null