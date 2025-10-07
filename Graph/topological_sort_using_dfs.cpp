#include <iostream>
#include <vector>
#include <stack>
using namespace std;

void dfs(int node, vector<vector<int>> &adj, vector<int> &visited, stack<int> &st) {
    visited[node] = 1;

    for (int i : adj[node]) {
        if (!visited[i])
            dfs(i, adj, visited, st);
    }

    st.push(node);
}

vector<int> topo_sort(int v, vector<vector<int>> &adj) {
    vector<int> visited(v, 0);
    stack<int> st;

    for (int i = 0; i < v; i++) {
        if (!visited[i])
            dfs(i, adj, visited, st);
    }

    vector<int> topoarr;
    while (!st.empty()) {
        topoarr.push_back(st.top());
        st.pop();
    }
    return topoarr;
}

int main() {
    int v = 6;
    vector<vector<int>> adj(v);
    
    adj[5] = {0, 2};
    adj[4] = {0, 1};
    adj[3] = {1};
    adj[2] = {3};

    vector<int> res = topo_sort(v, adj);

    cout << "Topological order: ";
    for (int node : res) {
        cout << node << " ";
    }
    cout << endl;

    return 0;
}
