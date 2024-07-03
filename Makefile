.PHONY: build clean

all: build

BINARY_NAME=main
ifeq ($(OS),Windows_NT)
	BINARY_NAME=main.exe
else
	BINARY_NAME=main
endif

build: clean 
	mkdir bin 
	g++ src/main.cpp -o bin/$(BINARY_NAME)

clean:
ifeq ($(OS),Windows_NT)
	-rmdir /S /Q bin 
else
	rm -rf bin 
endif

run: build
	./bin/$(BINARY_NAME)

# test:
# test something

