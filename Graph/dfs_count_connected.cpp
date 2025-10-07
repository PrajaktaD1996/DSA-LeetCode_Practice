#include<iostream>
#include<vector>
using namespace std;
void dfs(int node,vector<vector<int>> &adjnode, vector<bool> &visited ){
    visited[node]= true;
    cout<< node<<" ";

    for(int val : adjnode[node]){
        if(!visited[val])
        dfs(val,adjnode,visited);  //recursive
    }
};

int main(){

    int v=7;
    vector<vector<int>> adjnode(7);
    adjnode[0] = {1,2};
    adjnode[1] = {0,3};
    adjnode[2] = {0};
    adjnode[3] = {1};
    adjnode[4] = {5};
    adjnode[5] = {4,6};
    adjnode[6] = {5};
    int c = 0;

    vector<bool> visited(v,false);
    for(int i=0;i<v;i++)
    {
        if(!visited[i]){
        c++;
        cout<<"\n components:"<<c<<":";
        dfs(i,adjnode,visited);
        }
    }
       
   cout<<"Total number of connected nodes:"<<c;
   return 0;
}