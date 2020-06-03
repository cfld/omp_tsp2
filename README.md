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

## Docker

```
docker build -t omp_tsp2 .
docker run omp_tsp2
```

## License

MIT
