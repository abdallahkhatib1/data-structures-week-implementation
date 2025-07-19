#include <iostream>
#include <vector>
using namespace std;

class DisjointSet {
private:
    vector<int> parent;
    vector<int> rank;

public:
    DisjointSet(int size) {
        parent.resize(size);
        rank.resize(size, 0);
        for (int index = 0; index < size; index++)
            parent[index] = index;
    }

    int find(int element) {
        if (parent[element] != element)
            parent[element] = find(parent[element]);
        return parent[element];
    }

    void unite(int element1, int element2) {
        int root1 = find(element1);
        int root2 = find(element2);

        if (root1 != root2) {
            if (rank[root1] < rank[root2])
                parent[root1] = root2;
            else if (rank[root1] > rank[root2])
                parent[root2] = root1;
            else {
                parent[root2] = root1;
                rank[root1]++;
            }
        }
    }

    bool connected(int element1, int element2) {
        return find(element1) == find(element2);
    }
};


