# Variables
CC = gcc
CXX = g++
CFLAGS = -Iinclude -Wall -Wextra -Werror
GTEST_DIR = googletest
GTEST_FLAGS = -I$(GTEST_DIR)/include -I$(GTEST_DIR) -pthread

SRC_DIR = src
INCLUDE_DIR = include
BUILD_DIR = build
OBJECTS_DIR = objects

SRC = $(shell find $(SRC_DIR) -name '*.c')
INCLUDE = $(shell find $(INCLUDE_DIR) -name '*.h')
OBJ = $(patsubst $(SRC_DIR)/%.c, $(BUILD_DIR)/$(OBJECTS_DIR)/%.o, $(SRC))

TARGET = $(BUILD_DIR)/app 

all: $(TARGET)

run: $(TARGET)
	@./$<

$(TARGET): $(OBJ) $(BUILD_DIR)/main.o $(BUILD_DIR)/gtest-all.o
	@mkdir -p $(BUILD_DIR)
	$(CXX) $(GTEST_FLAGS) $(OBJ) $(BUILD_DIR)/main.o $(BUILD_DIR)/gtest-all.o -o $(TARGET)

$(BUILD_DIR)/main.o: main.cpp
	@mkdir -p $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) -I$(GTEST_DIR)/include -Iinclude -c main.cpp -o $(BUILD_DIR)/main.o

$(BUILD_DIR)/$(OBJECTS_DIR)/%.o: $(SRC_DIR)/%.c $(INCLUDES)
	@mkdir -p $(dir $@)
	$(CC) $(CXXFLAGS) -c $< -o $@

$(BUILD_DIR)/gtest-all.o: $(GTEST_DIR)/src/gtest-all.cc
	@mkdir -p build
	$(CXX) $(GTEST_FLAGS) -c $(GTEST_DIR)/src/gtest-all.cc -o $(BUILD_DIR)/gtest-all.o

clean:
	rm -rf build

.PHONY: all clean

