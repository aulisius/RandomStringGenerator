CC=g++
CPPFLAGS=-std=c++0x
OP=randstr

randstr: driver.o 
	$(CC) -o randstr driver.cpp $(CPPFLAGS)
