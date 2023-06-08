.SILENT:

GXX=g++
GXX_FLAGS=-std=c++17

BUILD=build

SRC=$(wildcard src/*.cpp)

all: mkbuild clean compile run

compile:
	$(GXX) $(GXX_FLAGS) $(SRC) -o $(BUILD)/main

run:
	./$(BUILD)/main

mkbuild:
	mkdir -p $(BUILD)

clean:
	rm -rf $(BUILD)/*