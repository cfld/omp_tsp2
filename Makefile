# Makefile

CC = g++
CXXFLAGS += -std=c++11 -Wall -O3 -DNDEBUG -fopenmp
LIBS += -lrt

all: main

main: src/*.cpp
	$(CC) $(CXXFLAGS) -o main src/*.cpp

clean:
	rm -f main
