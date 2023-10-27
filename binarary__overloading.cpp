#include <iostream>
using namespace std;
class demo{
    int a,b;
    public:
    demo(){}

    demo(int x,int y)
    {
        a=x;
        b=y;
    }
    void show()
    {
        cout<<"a"<<a<<"b"<<b;
    }
    demo operator+(demo obj)
    {
        demo temp;
        temp.a=a+obj.a;
        temp.b=b+obj.b;
        return temp;
    }


};
int main(){
    demo obj(10,20),obj1(30,40),obj2;
    obj2=obj+obj1;
    obj2.show();
}
