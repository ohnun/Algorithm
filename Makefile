# You can choose 'clang' or 'gcc'.
# CC = clang
# CC = gcc
CC = g++
PYTHON = python3
ADD_FILE = ./src/*.cpp \
./src/*/*.c

main: main.cpp
	$(CC) main.cpp $(ADD_FILE) -Wall -o main -g -lm

.PHONY: clean
# clean main.c and delete main exe.
clean:
	$(PYTHON) draft.py
	rm main
	clear