#include<iostream>
#include<vector>
using namespace std;


class Graph {
    int V; // number of vertices
    vector<vector<int>> adjMatrix; // adjacency matrix

public:
    Graph(int V) {
        this->V = V;
        adjMatrix.resize(V, vector<int>(V, 0)); // initialize with 0
    }

    // Add edge (u, v)
    void addEdge(int u, int v, bool directed = false) {
        adjMatrix[u][v] = 1;  
        if (!directed) {
            adjMatrix[v][u] = 1; // if undirected graph, add both ways
        }
    }

    // Print adjacency matrix
    void printMatrix() {
        cout << "Adjacency Matrix:\n";
        for (int i = 0; i < V; i++) {
            for (int j = 0; j < V; j++) {
                cout << adjMatrix[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    int V = 5; // number of vertices
    Graph g(V);

    g.addEdge(0, 1);
    g.addEdge(0, 4);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);
    g.addEdge(2, 3);
    g.addEdge(3, 4);

    g.printMatrix();

    return 0;
}