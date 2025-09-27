#include <iostream>
using namespace std;

int main(){

    int n,m;

    int ar1[50];
    int ar2[50];

    //input two arrays
    //array-1
    cout<<"Enter size of array-1:";
    cin>>n;

    //input ele of ar1:
    for(int i=0;i<n;i++){
        cin>>ar1[i];
    }


    //array-2
    cout<<"Enter the size of array-2:";
    cin>>m;
    for(int i=0;i<m;i++){
        cin>>ar2[i];
    }

    //concatinate the two arrays:
    for(int i = n,j=0;i<m+n;i++,j++){

          ar1[i] = ar2[j];
    }

    //show concatinated array:
    cout<<"The conncatenated array is as follows:";
    for(int i=0;i<m+n;i++){
        cout<<ar1[i]<<" ";
    }

    return 0;


}