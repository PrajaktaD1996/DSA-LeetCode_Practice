#include <iostream>
using namespace std;


int main(){

    int n;
    int ar[20];
    int sum =0;

    cout<<"Enter the size of array:";
    cin>>n;

    cout<<"Enter the ele of array:";
    for(int i =0;i<n;i++){
        cin>>ar[i];
    }

    cout<<"The array is as follows:";
    for(int i=0;i<n;i++){
        cout<<ar[i]<<" ";
    }

    cout<<"The new run sum array is:";
    for(int i=0;i<n;i++){
        sum = sum + ar[i];
        ar[i] = sum ;
    }

    for(int i=0;i<n;i++){
        cout<<ar[i]<<" ";
    }


    return 0;
}