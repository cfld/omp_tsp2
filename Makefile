# Makefile

CC = g++
CXXFLAGS += -std=c++11 -Wall -O3 -DNDEBUG -fopenmp
LIBS += -lrt

all: main

main: src/*.cpp
	$(CC) $(CXXFLAGS) -Isrc/ -o main src/*.cpp

mtest: src/mtest.cpp
	$(CC) $(CXXFLAGS) -Isrc/ -o mtest src/mtest.cpp

clean:
	rm -f main
