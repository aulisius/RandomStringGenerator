CC=g++
CPPFLAGS=-std=c++0x
OP=randstr

randstr: build main.o clean 
	$(CC) -o build/randstr main.cpp $(CPPFLAGS)

install: randstr
	sudo install build/randstr /usr/bin

build:
	mkdir -p build/

clean:
	rm *.o
