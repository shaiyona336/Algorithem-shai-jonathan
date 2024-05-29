#pragma once
#include <iostream>
#include <vector>
//#include "linkedList.h"
#include <list>
using namespace std;

class Graph {
private:
    vector<list<int>> adjList;
public:
    Graph();
    void MakeEmptyGraph(int n);
    void AddEdge(int u, int v);
    bool IsAdjacent(int u, int v);
    list<int> GetAdjList(int u);
    void RemoveEdge(int u, int v);
};
