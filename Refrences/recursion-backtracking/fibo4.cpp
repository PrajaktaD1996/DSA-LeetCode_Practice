//fibo4.cpp - in this we are neither using recurrsive stack nor using dp array, so in this case we are actually aciving SC: O(1)
//
#include<stdio.h>
#include<iostream>
#include<vector>

int fibo(int n){
	int a,b,c;
	a =0;b=1;
	
	for(int i=2;i<=n;i++){
		c = a+b;
		a = b;
		b = c; // final value is going to be stored in b not c, always remember to print b not c
	}

	return b;
		
}

int main(){


	int n;
	printf("Enter n:");
	scanf("%d", &n);
	printf("Fibonacci of %d: %d", n,fibo(n));
	return 0;
}
