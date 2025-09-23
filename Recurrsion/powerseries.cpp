#include <iostream>
#include <vector>
using namespace std;


void generatePowerset(vector<int> &nums, int index, vector<int> &curr,vector<vector<int>> &res){
    if(index == nums.size())
    {
        res.push_back(curr);
        return;
    }

    generatePowerset(nums,index+1,curr,res);
    curr.push_back(nums[index]);
    generatePowerset(nums,index+1,curr,res);

    curr.pop_back();
}
int main(){

    vector<int> nums ={1,2,3};
    vector<vector<int>> res;
    vector<int> cur ;
    generatePowerset(nums,0,cur,res);
    cout<<"Power set:";
    for(auto subset : res)
    {
        cout<<"[";
        for(auto x : subset)
        {
            cout<<x;

        }
        cout<<"]\n";

    }
    return 0;
}