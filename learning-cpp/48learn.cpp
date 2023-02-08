#include <bits/stdc++.h>
using namespace std;
// TOPIC: graphs
 

class graph{
public:
    unordered_map<int, list<int>> adj;

    void addEdge(int u, int v, bool dir){
    /// dir - 0 - directed 
    // dir - 1 - directed
    
    adj[u].push_back(v);
        if(!dir){
            adj[v].push_back(u);
        }
    };

    void printAdjacency(){
        for(auto it: adj){
                cout<<it.first<<"->";
            for(auto j: it.second){
                cout<<j<< ",";
            }
            cout<<endl;
        }
    }

};

int main(){

    int n;
    cout<<"enter no of edges"<<endl;
    cin>>n;

    graph g;

    for(int i=0;i<n;i++){
        int u, v;
        cin>>u>>v;;
        g.addEdge(u,v,1);
    }

    g.printAdjacency();
 
}