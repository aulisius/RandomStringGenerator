#include <iostream>
#include <chrono>
#include <ctime>
#include <cstring>
#include <random>

using namespace std;

class str
{
    int len;
    char *word;
    public:
    str() {}
    str(char *name, int l)
    {
        word = new char[l+1];
        strcpy(word,name);
        len = l;
    }

    void display()
{
    cout <<  word << endl << len << endl;
}

void randomizer()
{
    int i;
    unsigned seed;

    cout << "Enter length" << endl;
    cin >> len;

    if(len <= 0) return;

    word = new char[len+1];

    time_t now = time(0);
    seed = now;
    default_random_engine generator(seed);

    for(i = 0; i < len ; i++)
    {
        uniform_int_distribution<int> distribution(65,122);
        int current_char  = distribution(generator);
        if( current_char < 91 || current_char > 96)
            word[i] = current_char;
        else
        {
            uniform_int_distribution<int> distribution(65,90);
            current_char = distribution(generator);
            word[i] = current_char;
        }
    }
}
};
