GXX=g++
GXX_FLAGS=-std=c++17

BUILD=build

SRC=$(find ./src -maxdepth 1 -type f -name "*.cpp")

compile() {
    $GXX $GXX_FLAGS $SRC -o $BUILD/main
}

run() {
    ./$BUILD/main
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
compile
run