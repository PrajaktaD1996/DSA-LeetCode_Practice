#include<iostream>
#include<vector>


/*

  TC: O(n^2)
  SC: O(1)
*/
using namespace std;
vector<int> two_sum(vector<int> &arr,int target){
int n  = arr.size();

for(int i=0;i<n;i++){
    for(int j=n-1;j>0;j--){
      if(arr[i]+arr[j] == target)
         return {i,j};         
       }
}
return {};
}
int main(){

   vector<int> arr = {1,2,3,5,6};
   int target = 5;
   vector<int> val = two_sum(arr,target);

   cout<< val[0]<<","<<val[1];

    return 0;
}