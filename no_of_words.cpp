#include <iostream>
#include <string>

using namespace std;
int main()
{
    char s[1000];
    cout<<"Enter the sentence: "<<endl;
    gets(s);
    char *p=s;
    char **ptr=&p;
    int w=0;
    int nw=0;
    int i=0;
    while(**ptr !='\0')
    {
        if(**ptr==' ')
        {
            w=0;
        }
        else if(w==0)
        {
            w=1;
            nw++;
        }
        *ptr=(*ptr+1);
    }
    cout<<"Total no of words in the input string are: "<<nw;


    return 0;
}


