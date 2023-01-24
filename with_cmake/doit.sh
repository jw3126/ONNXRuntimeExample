#!/bin/bash
./download.sh
mkdir -p build
cd build
cmake ..
make
./main
