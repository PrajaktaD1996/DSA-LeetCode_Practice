#include<iostream>
#include<vector>
using namespace std;
class Graph{
    int V;
    vector<vector<int>> adjlist;
    public:
    Graph(int V){
        this->V = V;
        adjlist.resize(V);

    }

    void addEdge(int node1,int node2 ,bool directed = false){

        adjlist[node1].push_back(node2);

        if(!directed)
          adjlist[node2].push_back(node1);

    }

    void printList(){
        cout<<"The Adj list:";
        for(int i=0;i<V;i++){
            cout<<i<<"->";
            for(int nextone: adjlist[i]){
                cout<<nextone<<" ";

            }

            cout<<endl;
    
        }
    }
};




int main(){

    int V = 5;
    Graph g(V);
    g.addEdge(0,1);
    g.addEdge(0,4);
    g.addEdge(1,2);
    g.addEdge(1,3);
    g.addEdge(1,4);
    g.addEdge(2,3);
    g.addEdge(2,3);
    g.addEdge(3,4);

    g.printList();

    return 0;
}