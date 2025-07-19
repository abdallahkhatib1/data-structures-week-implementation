#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Graph {
private:
    int numberOfVertices;
    vector<vector<int>> adjacencyList;
    vector<bool> visited;

public:
    Graph(int vertices) {
        numberOfVertices = vertices;
        adjacencyList.resize(vertices);
        visited.resize(vertices, false);
    }

    void addEdge(int vertex1, int vertex2) {
        adjacencyList[vertex1].push_back(vertex2);
        adjacencyList[vertex2].push_back(vertex1);
    }

    void depthFirstSearch(int startVertex) {
        visited[startVertex] = true;
        cout << startVertex << " ";
        for (int neighbor : adjacencyList[startVertex]) {
            if (!visited[neighbor])
                depthFirstSearch(neighbor);
        }
    }

    void breadthFirstSearch(int startVertex) {
        vector<bool> visitedBreadth(numberOfVertices, false);
        queue<int> queue;
        queue.push(startVertex);
        visitedBreadth[startVertex] = true;

        while (!queue.empty()) {
            int currentVertex = queue.front();
            queue.pop();
            cout << currentVertex << " ";

            for (int neighbor : adjacencyList[currentVertex]) {
                if (!visitedBreadth[neighbor]) {
                    queue.push(neighbor);
                    visitedBreadth[neighbor] = true;
                }
            }
        }
    }

    void resetVisited() {
        visited.assign(numberOfVertices, false);
    }
};

