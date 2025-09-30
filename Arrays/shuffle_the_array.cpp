#include <iostream>
using namespace std;

int main(){

    int ar[20];
    int ans[20];
    int n;
    int j=0;
    int k=1;

    cout<<"Enter the size of array:";
    cin>> n;

    cout<<"Enter the ele of array:";
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }

    cout<<"The input array is:";
    for(int i=0;i<n;i++){
      cout<<ar[i]<<" ";
    }


    /*Brute fore approch*/
    // for(int i=0;i<n/2;i++){

    //     ans[j] = ar[i];
    //     j=j+2;

    // }

    // for(int i=n/2;i<n;i++){
    //     ans[k] = ar[i];
    //     k=k+2;
    // }


    /*codes written interview pointof view*/
    for(int i=0;i<n/2;i++){
        ans[j++]   = ar[i]; //taking from 1st half
        ans[j++] = ar[i+n/2]; //taking from second half
        //j= j+2;
    }


    cout<<"The output array is:";
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    return 0;

}