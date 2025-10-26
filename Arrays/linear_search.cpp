#include <iostream>
#include <vector>
using namespace std;


/*

TC : O(n)
SC : O(1)
*/

int search(vector<int>& arr,int x){

    for(int i=0;i<arr.size();i++){
        if(arr[i] == x)
        return i; //index at which ele is found;
    }

    return -1;

}

int main(){

    //input array:
    vector<int> arr ={2,3,4,5,20};

    int x = 4;

    int found = search(arr,x);
    
    if(found == -1 )
    cout<<"not found";

    else
    cout<<"found";

    //cout<<"ele is found at :"<<found<<":"<<arr[found];

    return 0;
}