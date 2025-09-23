#include <iostream>
using namespace std;

void print1_N(int num){
  
    if(num==0)
     return;
    print1_N(num-1);
    cout<<num<<" ";

}

int main(){


    int n ;
    cout<<"Enter the val of n:";
    cin>>n;
    print1_N(n);
    return 0;
}