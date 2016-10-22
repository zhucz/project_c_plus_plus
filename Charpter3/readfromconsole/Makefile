#This is prject Makefile

OBJS = demo
CC=g++
CFALGS = -Wall -O2

CPP_SOURCE = $(wildcard *.cpp)
OBJ_SOURCE = $(patsubst *.cpp, *.o, $(CPP_SOURCE))

all:$(OBJ_SOURCE)
	$(CC) -o $(OBJS) $(OBJ_SOURCE)

%.o:%.cpp 
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY:clean
clean:
	rm -rf *.o $(OBJS)

