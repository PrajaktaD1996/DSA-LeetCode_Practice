//fibonacci - navie method1-normal method
#include<stdio.h>

int fibo(int n){
	if(n==0 || n==1)
		return n;
	return fibo(n-1)+fibo(n-2);

}
int main(){
	int n;
	printf("Enter n:");
	scanf("%d",&n);
	printf("fibo at nth pos:%d",fibo(n));
	return 0;
}
