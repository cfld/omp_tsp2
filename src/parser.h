// parser.h

// Command line interface

#ifndef PARSER_H 
#define PARSER_H

#include <stdio.h>
#include <stdlib.h>
#include <getopt.h>

void parse_cmd(int argc, char **argv, Int& max_depth, Int& n_near, int& n_threads, int& n_reps, int& outer_iters, int& inner_iters, int& quiet, Int& lk_max_moves) {
  int c;
  
  while (true) {
      static struct option long_options[] = {
          {"max_depth",    required_argument, 0, 'a'},
          {"n_near",       required_argument, 0, 'b'},
          {"n_threads",    required_argument, 0, 'c'},
          {"n_reps",       required_argument, 0, 'd'},
          {"outer_iters",  required_argument, 0, 'e'},
          {"inner_iters",  required_argument, 0, 'f'},
          {"quiet",        required_argument, 0, 'g'},
          {"lk_max_moves", required_argument, 0, 'h'},
          {0, 0, 0, 0}
        };
      
      int option_index = 0;
      c = getopt_long(argc, argv, "abcdef", long_options, &option_index);

      if (c == -1) break;
      switch (c) {
        case 'a' : {max_depth    = atoi(optarg); break;}
        case 'b' : {n_near       = atoi(optarg); break;}
        case 'c' : {n_threads    = atoi(optarg); break;}
        case 'd' : {n_reps       = atoi(optarg); break;}
        case 'e' : {outer_iters  = atoi(optarg); break;}
        case 'f' : {inner_iters  = atoi(optarg); break;}
        case 'g' : {quiet        = atoi(optarg); break;}
        case 'h' : {lk_max_moves = atoi(optarg); break;}
        case '?' : {
          printf("Unknown option -- aborting -- see parser.h for usage \n");
          abort();
        }
        default  : {
          abort();
        }
      }
    }
}

#endif