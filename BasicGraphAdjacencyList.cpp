#include <iostream>
#include <unordered_map>
#include <list>
using namespace std;

class Graph {
private:
    unordered_map<int, list<int>> adj;

public:
    void addEdge(int u, int v, bool directed = false) {
        adj[u].push_back(v);
        if (!directed) {
            adj[v].push_back(u);
        }
    }

    void removeEdge(int u, int v, bool directed = false) {
        adj[u].remove(v);
        if (!directed) {
            adj[v].remove(u);
        }
    }

    void printGraph() {
        for (auto& pair : adj) {
            cout << pair.first << ": ";
            for (int neighbor : pair.second) {
                cout << neighbor << " ";
            }
            cout << endl;
        }
    }
};
