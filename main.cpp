#include <iostream>
#include "randstr.h"

int arraytoint(char *argv)
{
	int len = strlen(argv), result = 0;

	for(int i = 0; i < len ; i++) result = result * 10 + (argv[i] - '0');

	return result;
}

int main(int argc, char **argv)
{
	if(argc < 2)
	{
		fprintf(stderr, "Usage: randstr <length>\n");
		exit(-1);
	}

    randomstring myString; // Invokes the constructor
    myString.randomizer(arraytoint(argv[1])); //The magic function
    myString.display(); // To display

    return 0;
}

