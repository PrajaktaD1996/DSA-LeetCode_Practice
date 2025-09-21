#include <iostream>
using namespace std;


int fibbo(int n) //n is the sequence till you want the series
{
    if(n==0)
    return 0;

    if(n==1)
    return 1;

    return fibbo(n-1)+fibbo(n-2);
}


int main(){

    int n;

    cout<<"enter val of n:";
    cin>>n;

    cout<<"Fibbonaci series till n:";
    for(int i=0;i<n;i++)
    {
        cout<<fibbo(i)<<" ";
       
    }
    cout<<endl;
    return 0;
}