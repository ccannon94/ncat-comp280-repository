//
//  Graph.cpp
//  COMP280_Assignment5
//
//  Created by Christopher Cannon on 6/26/16.
//

#include "Graph.h"

//initializes the number of verticies to v, and fills matrix with zeros
Graph::Graph(int v)
{
    n = v;
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++)
            matrix[i][j] = 0;
    }
}

//add an edge between v and w
void Graph::AddEdge(int v, int w)
{
    matrix[v][w] = 1;
    matrix[w][v] = 1;
}



//print all verticies that are adjacent to v
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

//print the content of the adjacency matrix with one row per line of output
void Graph::PrintMatrix()
{
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            std::cout<<matrix[i][j];
        }
        std::cout<<std::endl;
    }
}