# You can choose 'clang++' or 'g++'.
# CC = clang++
CC = g++

SOURCE = $(wildcard ./src/*.cpp) $(wildcard ./src/*/*.c) main.cpp
TARGET = main
CFLAGS = -Wall -g -lm

all: $(TARGET)  
	@echo "Built $(TARGET)"

$(TARGET): $(SOURCE)
	@$(CC) $(CFLAGS) -o $@ $^

.PHONY: clean
# Flash main.cpp and delete main exe.
clean:
	@echo "Cleaning up..."
	@python3 draft.py
	@if [ -f $(TARGET) ]; then rm $(TARGET); fi
