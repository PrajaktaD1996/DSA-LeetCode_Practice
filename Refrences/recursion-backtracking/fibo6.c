//fibo6 :: Matrix exponential method --- it is not using recurrsive stack
//
#include<stdio.h>
#include<iostream>
#include<vector>
using namespace std;

struct Matrix{
	long long m[2][2];
};

Matrix multiply(Matrix a, Matrix b){
	Matrix res;
	res.m[0][0] = a.m[0][0]*b.m[0][0] + a.m[0][1]*b.m[1][0];
	res.m[0][1] = a.m[0][0]*b.m[0][1] + a.m[0][1]*b.m[1][1];
	res.m[1][0] = a.m[1][0]*b.m[0][0] + a.m[1][1]*b.m[1][0];
	res.m[1][1] = a.m[1][0]*b.m[0][1] + a.m[1][1]*b.m[1][1];
	return res;
}

Matrix power(Matrix a, long long n){
	Matrix res = {{{1,0},{0,1}}};
	while(n){
		if(n%2)
			res = multiply(res,a);
		a = multiply(a,a);
		n/=2;
	}
	return res;
}

long long fibo(long long n){
	if(n==0)return 0;
	Matrix M = {{{1,1},{1,0}}};
	M = power(M,n-1);
	return M.m[0][0];//calculating F(n)

}

int main(){

	long long n;
	printf("Enter n:");
	scanf("%lld",&n);
	printf("fibo of num%lld:%lld",n,fibo(n));
	return 0;
}
