#include<chrono>
#include<iostream>
#include<random>
#include"func.cpp"
int main()
{
        str s("RAMAN"),s1;
        str q(s1);
        str r,a;
        r=q+s1;
        r.countocc();
        r.disp();
	a.randomizer();
	a.countocc();
	a.disp();
        return 0;

}

