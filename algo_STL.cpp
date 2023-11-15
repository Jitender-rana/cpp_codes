#include <iostream>
#include <algorithm>
using namespace std;
void show(int a[],int arrsize)
{
    for(int i=0; i<arrsize; i++)
    {
        cout<<a[i]<<" ";
    }
}
int main(){
int arr[]={1,2,5,3,4,6,7,8,9};
int asize=sizeof(arr)/sizeof(arr[0]);
sort(arr,arr+9);
show(arr,asize);
cout<<endl;
if(binary_search(arr,arr+9,50)){
    cout<<"found";
}else{
cout<<"not found";}
}
