#include<iostream>
#include<vector>
using namespace std;

/*

TC : O(n)
SC : O(1)
*/

int max_subarray(vector<int> &nums){

    int cursum = 0;
    int maxsum = INT_MIN;

for(int i=0;i<nums.size();i++){
    cursum = cursum + nums[i];


    if(cursum > maxsum)
    maxsum = cursum;

    if(cursum < 0)
    cursum = 0;
}

 return maxsum;

}

int main(){


vector<int> arr = {-2,1,-3,4,-1,2,1,-5,4};

int max_sum = max_subarray(arr);
cout<<"Max-subarray :"<<max_sum;

    return 0;

}