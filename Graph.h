#pragma once
#include <iostream>
#include <vector>
#include "linkedList.h"


class Graph {
private:
    std::vector<linkedList> adjList;
public:
    Graph(int n);
    void MakeEmptyGraph(int n);
    void AddEdge(int u, int v);
    bool IsAdjacent(int u, int v);
    linkedList GetAdjList(int u);
    void RemoveEdge(int u, int v);
};
