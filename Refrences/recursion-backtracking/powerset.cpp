/*powerset basic backtracking problem, need to discover all the elements of the array; key thought :each element of the array is having two posibilities i.e include(push operation) or exclude that element(pop operation), pop operation leads to backtrackking*/

#include<stdio.h>
#include<iostream>
#include<vector>
using namespace std;

void backtrack(int index,vector<int>& nums, vector<int>& current, vector<vector<int>>& result){
	if(index==nums.size()){
		result.push_back(current);
		return ;
	}
	//include nums[index]
	current.push_back(nums[index]);
	backtrack(index+1,nums,current,result);

	//exclude nums[index]
	current.pop_back();
	backtrack(index+1,nums,current,result);
}

vector<vector<int>> subsets(vector<int>& nums){
	vector<vector<int>> result;
	vector<int> current;
	backtrack(0,nums,current,result);
	return result;
}

int main(){
	vector<int> nums = {1,2,3};
	vector<vector<int>> ans = subsets(nums);
	for(auto subset:ans){
		printf("[");
		for(int i=0;i<subset.size();i++){
			printf("%d",subset[i]);
			if(i!=subset.size()-1)
				printf(",");
		}
		printf("]\n");
	}
}
		
