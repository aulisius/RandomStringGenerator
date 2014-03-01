#include<iostream>
#include<string.h>
class str
{
        int len;
        int count[26];
        char *n;
        public:
        str(char *name="CPP",int l=3)
        {
                n=new char[l+1];
                strcpy(n,name);
                len=l;
                for(l=0;l<26;l++)
                {
                        count[l]=0;
                }
        }
        str(str &c)
        {
                int i;
                n=new char[(c.len)+1];
                strcpy(n,c.n);
                len=c.len;
                for(i=0;i<26;i++)
                {
                        count[i]=c.count[i];
                }
        }
        void disp();
        void cal();
        void getdata();
        void countocc();
        str friend scase(str);
        str operator+(str);
        void randomizer();
};

