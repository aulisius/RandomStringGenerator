#include<chrono>
#include<iostream>
#include<random>
#include"functions.cpp"
int main()
{
        str a("RAMAN"); // Invokes the constructor
	str b;
        a.countocc(); //Counts the occurunces
        a.disp(); // To display the data
	a.randomizer(); // Generates new random string
	a.countocc(); // Counts the occurunces
	a.disp(); // To display
	b.getdata(); // Get new data
	b.cal(); //Calculates the strlen
	b.anagram(); // To generate anagrams
        return 0;

}

