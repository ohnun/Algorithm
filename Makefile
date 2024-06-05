# You can choose 'clang' or 'gcc'.
# CC = clang
# CC = gcc
CC = g++
ADD_FILE = ./src/*.cpp \
./src/*/*.c

main: main.cpp
	$(CC) main.cpp $(ADD_FILE) -Wall -o main -g -lm

.PHONY: clean
# clean main.c and delete main exe.
clean:
	python3 draft.py
	rm main
	clear