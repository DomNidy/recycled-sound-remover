.PHONY: build clean

BINARY_NAME=main
ifeq ($(OS),Windows_NT)
	BINARY_NAME=main.exe
else
	BINARY_NAME=main
endif

build: clean 
	mkdir out
	g++ main.cpp -o out/$(BINARY_NAME)

clean:
ifeq ($(OS),Windows_NT)
	-rmdir /S /Q out
else
	rm -rf out
endif
