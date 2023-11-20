#include <iostream>
using namespace std;
int isprime(int n)
{
    int r;
    if (n <= 1)
        return r=0;
    for (int i = 2; i <= n / 2; i++)
        if (n % i == 0)
            return r=0;
    return r=1;
}
int main()
{
    int a[10],n,r,i;
    int primecount=0;
    cin>>n;
    cout<<"enter the elemnts in array: ";
    for(i=0; i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        r=isprime(a[i]);
        if(r==1){
            primecount++;
        }

    }
    cout<<primecount;
    return 0;

}
