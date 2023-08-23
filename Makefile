# You can choose 'clang' or 'gcc'.
# CC = clang
CC = gcc

main: main.c
	$(CC) main.c -Wall -o main -g -lm

.PHONY: clear
# clean main.c and delete main exe.
clear:
	$(CC) draft.c -o draft && ./draft
	rm draft main
	clear