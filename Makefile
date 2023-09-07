# You can choose 'clang' or 'gcc'.
# CC = clang
# CC = gcc
CC = g++

main: main.cpp
	$(CC) main.cpp -Wall -o main -g -lm

.PHONY: clear
# clean main.c and delete main exe.
clear:
	$(CC) draft.c -o draft && ./draft
	rm draft main
	clear