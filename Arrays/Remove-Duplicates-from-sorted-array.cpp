#include<iostream>
#include<vector>
using namespace std;


class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i ;
        int k =1;
        for(i=1;i<nums.size();i++)
        {
            if(nums[i]!=nums[i-1])
               {
                 nums[k]=nums[i];
                 k++;
               }
            
        }
        
        return k;
    }
};

int main()
{
    Solution obj;
    vector<int> nums = {1,2,3,4,4,5};
    int newLen = obj.removeDuplicates(nums);
    cout<<"Array after removing duplicates:";
    for(int i =0;i<newLen;i++)
    {
        cout<<nums[i]<<" ";
    }
    cout<<"\n New Length="<<newLen<<endl;
    return 0;


}