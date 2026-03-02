//power of number using recurrsion
//time compexity: O(b) , its time complexity can be redused---> check for opti_num_pow.c
#include<stdio.h>

int pow_num(int a,int b){
	if(b==0)
		return 1;
	return a*pow_num(a,b-1);

}
int main(){

	int num,power;
	printf("Enter the num and its power:");
	scanf("%d %d",&num,&power);
	printf("The result=%d",pow_num(num,power));
	return 0;
}
