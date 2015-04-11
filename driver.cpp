#include <chrono>
#include <iostream>
#include <random>
#include "randstr.h"

int main()
{
    str myString; // Invokes the constructor
    myString.randomizer();
    myString.display(); // To display

    return 0;
}

