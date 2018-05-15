# Macros

CC=g++
LINK=-c -Wall
BUILD_DIR=../build/
EXE_DIR=../bin/
INCLUDE=-I include

all: chess

chess: main.o
	$(CC) -o $(EXE_DIR)chess $(BUILD_DIR)main.o
main.o: main.cpp
	$(CC) $(LINK) -o $(BUILD_DIR)main.o main.cpp