# You can choose 'clang' or 'gcc'.
# CC = clang
# CC = gcc
CC = g++

main: main.cpp
	$(CC) main.cpp -Wall -o main -g -lm

.PHONY: clean
# clean main.c and delete main exe.
clean:
	$(CC) draft.c -o draft && ./draft
	rm draft main
	clear