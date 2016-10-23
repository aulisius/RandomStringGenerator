#include <iostream>
#include <chrono>
#include <ctime>
#include <cstring>
#include <cctype>
#include <random>

int main (int argc, char **argv) {
	if (argc < 2) {
		fprintf (stderr, "Usage: randstr [length]\n");
		exit (-1);
	}

	int length = atoi (argv[1]);

	std::default_random_engine generator (time (NULL));
	std::uniform_int_distribution<int> distribution (65,122);

	while (length-- > 0) {
		int current_char = distribution (generator);

		while (!isalpha (current_char)) 
			current_char = distribution (generator);

		putchar_unlocked (current_char);
	}

	return 0;
}
