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

int Graph::PrintAdjacent(int v)
{
    int output = 0;
    for(int i = 0; i < n; i++){
        if(matrix[v][n] == 1){
            output += 1 << (n-i);
            std::cout<<1;
        }else{
            std::cout<<0;
        }
    }
        
    return output;
}

void Graph::PrintMatrix()
{
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            std::cout<<matrix[i][j];
        }
        std::cout<<std::endl;
    }
}