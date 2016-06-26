//
//  Graph.hpp
//  COMP280_Assignment5
//
//  Created by Christopher Cannon on 6/26/16.
//

#include <stdio.h>

const int MAX = 100;

class Graph
{
private:
    int n; //number of verticies
    int matrix[MAX][MAX]; //adjacency matrix
    bool visited[MAX];
public:
    Graph(int v); //intitializes the number of verticies to v, and fills matrix with zeros
    void AddEdge(int v, int w); //adds an edge between v and w
    void DeleteEdge(int v, int w); //delete the edge betweeen v and w
    int PrintAdjacent(int v); //print all verticies that are adjacent to v
    void PrintMatrix(); //print the content of the adjacency matrix with one row per line of output
};