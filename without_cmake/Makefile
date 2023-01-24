run: compile
	LD_LIBRARY_PATH=onnxruntime-linux-x64-1.13.1/lib ./main

compile:
	gcc -o main main.c -Ionnxruntime-linux-x64-1.13.1/include -lonnxruntime -Lonnxruntime-linux-x64-1.13.1/lib

download:
	./download.sh

all: download compile run
