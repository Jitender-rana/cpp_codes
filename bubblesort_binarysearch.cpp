#include <iostream>
using namespace std;
void printarr(int arr[],int n)
{
    int i;
    cout<<"the elements of array are: "<<endl;
    for(i=0; i<n; i++)
    {
        cout<<arr[i];
    }
}
int main()
{
    int arr1[100],n,i,temp,j,data;
    cout<<"the size of array: "<<endl;
    cin>>n;
    cout<<"enter the lements of array";
    for(i=0; i<n; i++)
    {
        cin>>arr1[i];
    }
    printarr(arr1,n);
    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-i-1; j++)
        {
            if(arr1[j]>arr1[j+1])
            {
                temp=arr1[j+1];
                arr1[j+1]=arr1[j];
                arr1[j]=temp;



            }
        }
    }
    cout<<"\nafter updation:  "<<endl;
    printarr(arr1,n);
    cout<<"enter the element u want to search: "<<endl;
    cin>>data;
    int l=0;
    int r=n-1;
    int mid=(l+r)/2;
    while(l<r)
    {
        if(arr1[mid]==data)
        {
            cout<<"the index of element is: "<<mid<<endl;
            break;
        }
        else if(arr1[mid]>data)
        {
            r=mid-1;
        }
        else if(arr1[mid]<data)
        {
            l=mid+1;
        }
    }
    if(l>r){
        cout<<"element not found";
    }




















}
