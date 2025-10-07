#include<iostream>
#include<vector>
using namespace std;

/*
TC : O(V+E)
SC : O(V)

V: Vertices
E :Edges

*/


bool dfs(int node, vector<vector<int>> &adj, vector<int> &visited, vector<int> &pathvisited){
    visited[node] = 1;
    pathvisited[node] = 1;



    for(int net:adj[node]){
        if(!visited[net]){
            if(dfs(net,adj,visited,pathvisited))
            return true;
        }

        else if(pathvisited[net])
        return true;
    }


    pathvisited[node] = 0;
    return false;
}

bool hascycle(int v, vector<vector<int>> &adj){
    vector<int> visited(v,0);
    vector<int> pathvisited(v,0);

    for(int i=0;i<v;i++){
        if(!visited[i]){
        if(dfs(i,adj,visited,pathvisited))
        return true;
        }
    }
    return false;
}
int main(){

    int v = 4;
    vector<vector<int>> adj(v);
    adj[0] = {1};
    adj[1] = {2};
    adj[2] = {3};
    adj[3] = {1};


    if(hascycle(v,adj)){
        cout<<"cyclce detected";


    }

    else{
        cout<<"No cycle detected";
    }

    return 0;
}

