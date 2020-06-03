#!/usr/bin/env python

"""
    pack.py
"""

import sys
import argparse
import numpy as np

from simple_tsp.prep import load_problem, load_solution
from simple_tsp.helpers import route2cost

# --
# Helpers

def pack_problem(outpath,  dist, n_nodes):
    out = np.hstack([[n_nodes], dist.ravel()])
    _   = open(outpath, 'wb').write(bytearray(out))

# --
# CLI

def parse_args():
    parser = argparse.ArgumentParser()
    parser.add_argument('--inpath', type=str, default='data/tsplib/ts225.tsp')
    parser.add_argument('--outpath', type=str, default='prob')
    return parser.parse_args()

# --
# Run

if __name__ == "__main__":
    args = parse_args()
    
    print(f'pack.py: erad from {args.inpath}', file=sys.stderr)
    dist, n_nodes = load_problem(args.inpath)
    
    print(f'pack.py: write to {args.outpath}', file=sys.stderr)
    pack_problem(args.outpath, dist, n_nodes)