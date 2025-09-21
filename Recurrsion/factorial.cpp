#include <iostream>
using namespace std;

int fact(int n)
{
    if(n==0) // factorial of zero is 1
    return 1;

    return n*fact(n-1);


}
int main(){

    int num;
    
    cout<<"Enter the ele:";
    cin>>num;
    
    cout<<"The factorial of num: "<<fact(num);
    return 0;
}