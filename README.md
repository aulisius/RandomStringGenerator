This is my first project (just for fun). Documentation for the project is mentioned here.

	 The class str is defined in head.h

	 The methods of str are defined in functions.cpp

	 The file.cpp is where function calls are made and objects are declared(it is the main() technically).

Headers used
	
	 The chrono header is the lib which is used to access/use the system clock, which is used to get some value for the random generator seed.
	
	 The random header is the lib which is used to access/use the different random generators/engines.
	
	 The string header is the lib which is used for string manipulation functions.

str has 3 data members : a char *,int and int array

	 The constructor str is a  constructor(param with default arguments)

	 The function disp() - Displays the data members;

	 The function cal() - Calculates length of char *;

	 The function countocc() - Calculates frequency of each alphabet in the char *;

	 The function randomizer() - Generates a random string of given length;

Most of the functions used here are elementary and are just lab assignments.My project is to create randomized strings of given length.

edit0: The problem right now is that strings aren't random for each run

	 RUN 1 : String - ADUMO

	 RUN 2 : String - ADUMO

Thus alphabets are random in same run, but not in different runs.

edit1: The strings are random after a few tweaks
	
	The new bug is every run has A as the first letter.

edit2: The strings are same for different runs if string length is within a given limit
 
    	 RUN 1 : Length = 4 String = AHlN

	 RUN 2 : Length = 10 String = AHlNqrTyPF

	 RUN 3 : Length = 11 String = AApqfJRTQES

Thus for (len=4 and len =10) The string is not random.

