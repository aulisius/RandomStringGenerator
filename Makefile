CC=g++
CPPFLAGS=-std=c++0x
OP=randstr

randstr: main.o 
	$(CC) -o randstr main.cpp $(CPPFLAGS)
