// fibonacci - to remove the overlapping issue - using memoisation -top-down DP
// in memoisarion the array is indexed by the subproblem, what is asked.
#include<stdio.h>
#include<vector>
#include<iostream>
using namespace std;
//recurrsion function
//using n+1, we can take value including n,initialising all the value with -1.
int solve(int n,vector<int>& dp){
		if(n==0) return 0;
		if(n==1) return 1;
		if(dp[n] !=-1) return dp[n]; //that means it is already computed

		dp[n] = solve(n-1,dp) + solve(n-2,dp);
		return dp[n];
				
}
//main dp function, the way it is going to fill dp array by solve
//Below one is memoisation function
int fib(int n){
	vector<int> dp(n+1,-1);
	return solve(n,dp);
}
int main(){
        int n;
	printf("Enter n:");
	scanf("%d",&n);
	printf("The fibonacci of %d:%d",n, fib(n));
	return 0;
}
