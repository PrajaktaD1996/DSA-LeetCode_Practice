#include<iostream>
#include<vector>

using namespace std;

/*

1. To impliment binary search, the array must be sorted 
2. TC : O(log(N))
3. SC : O(1)

*/
int binary_search(vector<int> &arr,int x){
    int low = 0;
    int high = arr.size()-1;

    while(low<high){
        int mid = low + (high-low)/2;
        if(arr[mid]==x)
        return mid;

        else if(arr[mid]<x) // this means your ele lies in 2nd half,post mid
        low  = mid+1;

        else if(arr[mid]>x) // this means your ele lies in 1st half, befor mid
        high = mid-1;


        return mid;

    }

    return -1;

}


int main(){


     vector<int> arr = {10,20,30,40,50,60,70};
     int x =60;

     int found = binary_search(arr,x);

     if(found == -1)
     cout<<"Not found";

     else
     cout<<"Ele found at:"<<found<<" i.e  : "<<arr[found];


    return 0;

}