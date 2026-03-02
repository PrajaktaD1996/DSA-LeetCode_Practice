//optimised number power
/*key understanding if power value increases let say 31, then 2^31 = 2,147,283,648,i.e int:4 bytes, long long is of 8:bytes that is max so anything beyond this will give rise
/the answer will go in overflow condition,inorder to avoid this we will use long long for funstion return type and result type. */ 
#include<stdio.h>
long long opti_num_pow(int a,int b){

	if(b==0)
		return 1;
	//return a*opti_num_pow(a,b-1); in this method, it is using (b-1) recurrsive calls
	//like for even powers the pow is divided in equal parts,and in case of odd powers it need to be multiplied by the left number. 
	long long half = opti_num_pow(a,b/2); // based on log concept 

	if(b%2==0)
	 return half*half;

	else
	 return a*half*half;
	
}



int main(){
	int a,b;
	printf("Enter the a,b:");
	scanf("%d %d",&a,&b);
	printf("The res:%lld",opti_num_pow(a,b));

	return 0;
}
