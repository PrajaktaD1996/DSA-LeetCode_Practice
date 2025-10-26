#include <iostream>
#include <vector>
using namespace std;
int main(){

    int n;
    int ar[20];
    int ans[20];

    vector<int> lsum;
    vector<int> rsum;


    cout<<"Enter n:";
    cin>>n;

    cout<<"Enter array:";
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }

    cout<<"input:::";
    for(int i=0;i<n;i++){
        cout<<ar[i]<<" ";
    }

    int sum =0;
    for(int i=0;i<n;i++){
        sum = sum +ar[i];
        lsum.push_back(sum);
    }

    sum =0;
    for(int i=n-1;i>0;i--){
        sum = sum+ar[i];
        rsum.push_back(sum);
    }

    for(int i=0;i<n;i++)
    {
        ans[i] = abs(lsum[i]-rsum[i]);
    }

    cout<<"output:::";
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
  
    
    return 0;
}