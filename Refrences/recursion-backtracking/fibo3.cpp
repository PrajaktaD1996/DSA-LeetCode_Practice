/*fibonacci- fibo3.cpp(bottom-up dp) - improvised version of fibo2.c in which recurssion stack was used, it is better than fibo2 
/but still it uses dp array, so SC: O(N) is still as it is.; in fibo3.cpp we are using iterative dp.*/

#include<stdio.h>
#include<iostream>
#include<vector>

using namespace std;

int fib(int n){
        if(n==0) return 0;
	if(n==1) return 1;
	vector<int> dp(n+1); //in this it is not prestoring of val with -1

	dp[0] = 0;
	dp[1] = 1;

	for(int i=2;i<=n;i++){
		dp[i] = dp[i-1]+dp[i-2];
	}

	return dp[n];
}
int main(){

	int n;
	printf("Enter n:");
	scanf("%d", &n);
	printf("fibo of %d:%d",n, fib(n));
	return 0;
}
 
