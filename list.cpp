#include <list>
#include <iostream>
using namespace std;
int main(){
    list<int> l;
    cout<<l.size();
    l.push_back(5);
    cout<<endl<<l.size();
    l.push_front(10);
    cout<<endl<<l.size();
    list<int>::iterator i=l.begin();
    cout<<endl;
    for(i=l.begin(); i!=l.end();i++)
    {cout<<*i<<" ";}
}