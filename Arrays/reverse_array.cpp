#include <iostream>
using namespace std;

int main(){
    int n;
    int arr[20];


    //insert ele of array
    cout<<"Enter the size of array: ";
    cin>>n;
     
    cout<<"Enter ele of array:";
    for(int i=0;i<n;i++)
    cin>>arr[i];

    cout<<endl;

    //display ele of array
    cout<<"The array is as follows:";
    for(int i=0;i<n;i++)
    cout<<arr[i] <<" ";

    cout<<endl;

    //reverse the array
    cout<<"The reverse array is as follows:";
    for(int i=0,j=n-1;i<j;i++,j--)
    swap(arr[i],arr[j]);

    //dispaly reversed array:
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";


    return 0;




}