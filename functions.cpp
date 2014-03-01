nclude<iostream>
#include<chrono>
i#include<string.h>
#include"head.h"
#include<random>
using namespace std;
void str::disp()
{
        int i;
        cout<<n<<endl;
        cout<<len<<endl;
        for(i=0;i<26;i++)
        {
                cout<<count[i]<<"\t";
        }
}
void str::cal()
{
        len=strlen(n);
}
void str::getdata()
{
        cout<<"Name"<<endl;
        cin>>n;
}
void str::countocc()
{
        int i;
        for(i=0;i<len;i++)
        {
                if((n[i]>64)&&(n[i]<91))
                {
                        count[n[i]-65]+=1;
                }
                if((n[i]>96)&&(n[i]<123))
                {
                        count[n[i]-97]+=1;
                }
        }
}
str scase(str s)
{
        int i;
        for(i=0;i<s.len;i++)
        {
               if((s.n[i]>64)&&(s.n[i]<91))
                        s.n[i]=s.n[i]+32;
	       else if((s.n[i]>96)&&(s.n[i]<123))
	                s.n[i]=s.n[i]-32;
               else
	                s.n[i]+=0;
        }
	        return s;
}
str str::operator+(str s1)
{
        str s;
        s.n=strcat(n,s1.n);
        s.len=len+s1.len;
        return s;
}
void str::randomizer()
{
         int i;
         cout<<"Enter length"<<endl;
         cin>>len;
         n=new char[len+1];
         unsigned seed,b;
         b=rand()%len;
         seed=rand()%b;
         default_random_engine generator(seed);
         for(i=0;i<len;i++)
         {
                 uniform_int_distribution<int> distribution(65,90);
                 int a  = distribution(generator);
                 n[i]=a;
         }
}

