//print 1 to n using recurrsion
#include<stdio.h>

int print1_n(int n){

	if(n==0){
	   return 0;
	}

	//printf("%d ",n); // printing before recurrsion call it will print stack value  Exp 5 4 3 2 1
	print1_n(n-1);
        printf("%d ",n);//but in case if print after recurrsion call, it will print return/collapse stack values Exp 1 2 3 4 5 
}

int main(){

	int n;
	printf("Enter n:");
	scanf("%d",&n);

	print1_n(n);

	return 0;
}





