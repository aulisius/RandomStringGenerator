#include <iostream>
#include <chrono>
#include <ctime>
#include <cstring>
#include <random>

using namespace std;

class randomstring
{
	private:
		int len;
		char *word;

	public:

		//Constructors
		randomstring() {}
    
		randomstring(char *name, int l)
		{
			word = new char[l + 1];
			strcpy(word, name);
			len = l;
		}

		void display()
		{
			cout <<  word << endl << len << endl;
		}

		void randomizer(int tlen)
		{
			int i;
			unsigned seed;

			if(tlen <= 0) return;

			len = tlen;
			word = new char[len+1];
	
			//Initializing the generator with a seed based on current time 
    	
			time_t now = time(0);
			seed = now;
			default_random_engine generator(seed);

			for(i = 0; i < len ; i++)
			{
				uniform_int_distribution<int> distribution(65,122);
				int current_char = distribution(generator);
        	
				//Check for stray ASCII values
				if( current_char < 91 || current_char > 96) word[i] = current_char;
				else 
				{
					// Handle if stray ASCII is generated
					uniform_int_distribution<int> distribution(65,90);
					current_char = distribution(generator);
					word[i] = current_char;
				}
			}
		}
};
 
