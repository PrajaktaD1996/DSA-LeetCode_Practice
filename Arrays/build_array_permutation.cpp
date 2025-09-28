#include <iostream>
using namespace std;
int main(){
   
    int n;
    int ar[20],ans[20];
    cout<<"Enter the size of array:";
    cin>>n;

    cout<<"Enter the elements array:";
    for(int i=0;i<n;i++){
    cin>>ar[i];
    }

    
    cout<<"The output array is:";
    for(int i=0;i<n;i++){
        cout<<ar[i]<<" ";
    }
  
    cout<<"The new permuted array is:";
    for(int i=0;i<n;i++){
        ans[i] = ar[ar[i]];
    }

    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    
    return 0;

}