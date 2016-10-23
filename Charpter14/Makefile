#This is Makefile for Dynamic Memory Allocation

OBJS=demo
CC=g++
CFLAGS = -Wall -O2

CPP_SOURCE=$(wildcard *.cpp)
OBJ_SOURCE=$(patsubst *.cpp, *.o, $(CPP_SOURCE))

all:$(OBJ_SOURCE)
	$(CC) -o $(OBJS) $(OBJ_SOURCE)

%.o:%.cpp 
	$(CC) -c $(CFLAGS) $< -o $@

.PHONY:clean 
clean:
	rm -rf *.o $(OBJS)


