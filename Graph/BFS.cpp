#include<iostream>
#include<vector>
#include<queue>

using namespace std;

class Graph {
    int V;
    vector<vector<int>> adjlist;
public:
    Graph(int V) {
        this->V = V;
        adjlist.resize(V);
    }

    void addEdge(int node1, int node2) {
        adjlist[node1].push_back(node2);
        adjlist[node2].push_back(node1); // undirected graph
    }

    void BFS(int start) {
        vector<bool> visited(V, false);  
        queue<int> q;

        visited[start] = true;  // mark first element
        q.push(start);

        while (!q.empty()) {
            int u = q.front();
            q.pop();
            cout << u << " "; // process u

            for (int nextone : adjlist[u]) {
                if (!visited[nextone]) {
                    visited[nextone] = true;
                    q.push(nextone);
                }
            }
        }
        cout << endl;
    }
};

int main() {
    int V = 5;
    Graph g(V);
    g.addEdge(0, 1);
    g.addEdge(0, 4);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);
    g.addEdge(2, 3);
    g.addEdge(3, 4);

    cout << "Starting the traversal from node 0: ";
    g.BFS(0);

    return 0;
}