# omp_tsp

Simple implementation of LKH3-style TSP solver w/ OMP parallelization over perturbations.

## Installation and Usage

```
# Install python dependencies (for `tsplib2binary.py` only)
./install.sh

# Convert TSPLIB to binary format
python utils/tsplib2binary.py

# Compile omp_tsp
make clean; make

# Run
./main

# Run with options
./main --inner_iters 20 --outer_iters 2 --n_reps 2 --n_threads 1
./main --inner_iters 20 --outer_iters 2 --n_reps 2 --n_threads 2
```

## Parameters

See `src/main.cpp` for parameter documentation.

## Controlling runtime

There are datasets scaling several orders of magnitude in `data/tsplib`:
```
wc -l data/tsplib/*.tsp | sort -n -r
```

Alternatively, to get really fast runs, you can set the numbers of iterations to small values:
```
time ./main --inner_iters 1 --outer_iters 1 --n_reps 1 --lk_max_moves 1 
```

`lk_max_moves` controls the number of improving moves executed inside of the `lk_solve` function.  This parameter

## Docker

```
docker build -t omp_tsp2 .
docker run omp_tsp2
```

## License

MIT
