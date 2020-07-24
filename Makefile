# Makefile

CC = g++
CXXFLAGS += -std=c++11 -mtune=native -march=native -Wall -O3 -DNDEBUG -fopenmp -g
LIBS += -lrt

all: main

main: src/*.cpp
	$(CC) $(CXXFLAGS) -o main src/*.cpp

clean:
	rm -f main
