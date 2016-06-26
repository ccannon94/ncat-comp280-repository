//
//  Graph.cpp
//  COMP280_Assignment5
//
//  Created by Christopher Cannon on 6/26/16.
//

#include "Graph.h"

Graph::Graph(int v)
{
    n = v;
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++)
            matrix[i][j] = 0;
    }
}

void Graph::AddEdge(int v, int w)
{
    matrix[v][w] = 1;
    matrix[w][v] = 1;
}


