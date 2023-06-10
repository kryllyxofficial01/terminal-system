GXX=g++
GXX_FLAGS=-std=c++17

BUILD=build
COMMANDS=src/commands
BIN=src/bin

SRC=$(find ./src -maxdepth 1 -type f -name "*.cpp")
CMDS=$(find ./$COMMANDS -type f -name "*.cpp")

compile() {
    $GXX $GXX_FLAGS $SRC -o $BUILD/main
}

run() {
    ./$BUILD/main
}

create_binaries() {
    for command in $CMDS; do \
        path=${command%.*}; \
        name=${path##*/}; \
        g++ "$COMMANDS/$name.cpp" -o $BIN/$name; \
    done
}

mkbuild() {
    mkdir -p $BUILD
}

clean() {
    rm -rf $BUILD/*
}

set -e

mkbuild
clean
create_binaries
compile
run