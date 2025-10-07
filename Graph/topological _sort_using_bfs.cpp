/*
Khans' Algorithm 

TC : O(V+E)
SC : O(V+E)
*/


#include<iostream>
#include<vector>
#include<queue>

using namespace std;

vector<int>  topo_bfs(int v,vector<vector<int>> &adj){
    vector<int> in_degree(v,0);

    //compute in dregree of each node
    for(int u=0;u<v;u++){
        for(int node:adj[u])
        {
            in_degree[node]++;
        }
    }

    queue<int> q;
    for (int i = 0; i < v; i++) {
        if (in_degree[i] == 0) q.push(i);
    }
    vector<int> topo_order;
    while(!q.empty()){
  
        int u = q.front();
        q.pop();
        topo_order.push_back(u);

        for(int node :adj[u]){
            in_degree[node]--;
            if(in_degree[node] == 0){
                q.push(node);
            }
        }
    }

    if(topo_order.size()!= v){
        cout<<"Graph contains acycle so topological sorting is not posible";
        return{};
    }
    return topo_order;
}



int main(){

    int v = 6;
    vector<vector<int>> adj(v);
    adj[5] = {0,2};
    adj[4] = {0,1};
    adj[2] = {3};
    adj[3] = {1};

    vector<int> res = topo_bfs(v,adj);
    cout<<"Topological order";
    for(int node:res){
        cout<<node<<" ";
    cout<<endl;

    }

    return 0;
}