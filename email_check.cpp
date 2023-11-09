#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int valid(char* s)
{
    int i;
    int la=-1;
    int ld=-1;
    int count =0;
    for(i=0; s[i]!='\0'; i++)
    {
        if(s[i]=='@')
        {
            la=i;
            count++;
        }
        else if(s[i]=='.')
        {
            ld=i;
        }
    }
    if(ld==-1 || la==-1)
        return 0;
    if((la>ld) || ld==i-1)
        return 0;
    if(la==0)
        return 0;
    if(ld==1)
        return 0;
    return 1;
}
int main()
{
    char p[100];
    gets(p);


    try
    {
        if(valid(p)==0)
            throw 'c';
        cout<<"the given email is valid";
    }
    catch(char c)
    {
        cout<<"the email is invalid excdeption caught.";
    }
    return 0;
}
