#include <iostream>
using namespace std;
class Icecream{
    public:
    virtual float Quantity()=0;

};
class SphereIC: public Icecream{
    float radius;
    public:
    SphereIC(){

    }
    SphereIC(float r){
        radius=r;
    }
    float Quantity(){
        return (4/3*3.14*radius*radius*radius);
    }
};
class ConeIC: public Icecream{
    float radius,height;
    public:
    ConeIC(){

    }
    ConeIC(float r,float h){
        radius=r;
        height=h;
    }
    float Quantity(){
        return 1/3*3.14*radius*radius*height;
    }

};
int main(){
    int choice;
    cout<<"enter 1 for sphere icecreama and 2 for cone";

    cin>>choice;
    if(choice==1){
        Icecream* I;
        float r;
        cin>>r;
        I=new SphereIC(r);
        cout<<(I->Quantity());
    }else if(choice==2){
        Icecream* I;
        float r,h;
        cin>>r>>h;
        I=new ConeIC(r,h);
        cout<<(I->Quantity());

    }else{
        cout<<"Invalid choice: ";
    }
    return 0;
}