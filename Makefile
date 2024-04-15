# You can choose 'clang' or 'gcc'.
# CC = clang
# CC = gcc
CC = g++
ADD_FILE = ./src/*.cpp

main: main.cpp
	$(CC) main.cpp $(ADD_FILE) -Wall -o main -g -lm

.PHONY: clean
# clean main.c and delete main exe.
clean:
	$(CC) draft.c -o draft && ./draft < tamplate.txt
	rm draft main
	clear