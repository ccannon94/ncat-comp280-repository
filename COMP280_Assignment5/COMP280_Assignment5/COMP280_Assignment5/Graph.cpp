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
    //intitializes number of verticies
    n = v;
    
    //fills used portion of matrix to 0
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++)
            matrix[i][j] = 0;
    }
}

//add an edge between v and w
void Graph::AddEdge(int v, int w)
{
    //sets edge from v to w to 1
    matrix[v][w] = 1;
    //sets edge from w to v to 1
    matrix[w][v] = 1;
}

//delete the edge between v and w
void Graph::DeleteEdge(int v, int w)
{
    //sets edge from v to w to 0
    matrix[v][w] = 0;
    //sets edge from w to v to 0
    matrix[w][v] = 0;
}

//print all verticies that are adjacent to v
int Graph::PrintAdjacent(int v)
{
    //creates an int to hold the output as a 32-bit int
    int output = 0;
    //increments through the row associated with vertex v
    for(int i = 0; i < n; i++){
        //if an edge exists, set a bit to 1 at that position and print a 1
        if(matrix[v][i] == 1){
            //output += 1 << (n-i);
            std::cout<<1;
        }
        //otherwise, print a 0
        else{
            std::cout<<0;
        }
    }
    
    //return the 32-bit integer generated
    return output;
}

//print the content of the adjacency matrix with one row per line of output
void Graph::PrintMatrix()
{
    //print the number showing existance of an edge at each position
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            std::cout<<matrix[i][j];
        }
        //after a row is completed, start a new row on output terminal
        std::cout<<std::endl;
    }
}