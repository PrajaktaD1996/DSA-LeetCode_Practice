//fibo5 : fast doubling method is used, avoiding computation like fib(n-1)+fib(n-2)
/*Instead we are using the fibonacci addition 
 * F(2k)   = F(k)[2F(2k+1)+F(2k)]
 * F(2k+1) = F(k+1)*F(k+1) + F(k)*F(k)
 * */

#include<stdio.h>
#include<iostream>
#include<vector>
using namespace std;
pair<long long,long long> fib(long long n){

    if(n==0)
	    return {0,1};
    auto p = fib(n/2);
    long long a = p.first;  //F(k)
    long long b = p.second; //F(k+1)

    long long c = a*(2*b-a);//calculating even F(2k)
    long long d = a*a + b*b;//calculating odd  F(2k+1)
			    
  if(n%2==0) return {c,d};
  else return {d,c+d};  

}

int main(){

        long long n;
	printf("Enter n:");
	scanf("%lld",&n);
	printf("fibo of the numeber:%lld",fib(n).first);
	return 0;
}
