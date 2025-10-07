#include<iostream>
#include<vector>
using namespace std;



void dfs(int mynode, vector<vector<int>> &adjnode, vector<bool> &visited) // for limited stack
{
    visited[mynode] = true;
    cout<<mynode<<" ";

    for(int nextone : adjnode[mynode])
    {
        if(!visited[nextone])
        dfs(nextone,adjnode,visited);
    }
}

int main(){


   int v =5;
   vector<vector<int>> adjnode(v); 
   /*
   note:

   Having written with adjnode can cause blunder, resulting in empty graph, 
   to have non-empty graph write it adjnode(v) 
   */

   adjnode[0] = {1,2};
   adjnode[1] = {0,3};
   adjnode[2] = {0,3};
   adjnode[3] = {1,2,4};
   adjnode[4] = {3};

   vector<bool> visited(v,false);
   cout<<"dfs startes form node 0:: ";
   dfs(0,adjnode,visited);

    return 0;
}