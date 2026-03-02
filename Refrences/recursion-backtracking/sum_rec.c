//printing sum of n natural numbers.
#include<stdio.h>

int sum(int n){
        int s =0;
	if(n==0){
        return 0;
	}
       return n+sum(n-1);
       
}	



int main(){

	int n;
	printf("Enter the n:");
	scanf("%d",&n);
	printf("The sum of n natural numbers is:%d",sum(n));
	return 0;

}
