#include<iostream>
#include<vector>
#include<stack>

using namespace std;

class Graph{
    int V;    //numberof nodes
    vector<vector<int>> adjlist;
    public:
    Graph(int V){
        this->V = V;
        adjlist.resize(V);

    }
    void addEdge(int node1,int node2){
        adjlist[node1].push_back(node2);
        adjlist[node2].push_back(node1);

    }

   void DFSIterative(int start){
    vector<bool> visited(V,false);
    stack<int> st;
    st.push(start);
    while(!st.empty()){
        int node = st.top();
        st.pop();

        if(!visited[node]){
            cout<<node <<" ";
            visited[node] = true;
        }

        for(int nbr : adjlist[node]){  //itrerative
            if(!visited[nbr])
            st.push(nbr);
        }
    }
    cout<<endl;
   }
};

int main() {
    Graph g(5);
    g.addEdge(0, 1);
    g.addEdge(0, 4);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);
    g.addEdge(2, 3);
    g.addEdge(3, 4);

    cout << "DFS (iterative) starting from node 0: ";
    g.DFSIterative(0);

    return 0;
}
