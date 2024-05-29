#include "Graph.h"

class linkedList;


Graph::Graph() {
    
}


void Graph::MakeEmptyGraph(int n) {
    adjList.resize(n);
}


list<int> Graph::GetAdjList(int u) {
    return adjList[u];
}


bool Graph::IsAdjacent(int u, int v) {
    for (int adjVertex : adjList[u]) {
        if (adjVertex == v) {
            return true;
        }
    }
    return false;
}



void Graph::AddEdge(int u, int v) {
    if (!IsAdjacent(u,v)) {
        adjList[u].push_back(v);
    }
}


void Graph::RemoveEdge(int u,int v) {
    adjList[u].remove(v);
}
