//
//  main.cpp
//  COMP280_Assignment5
//
//  Created by Christopher Cannon on 6/26/16.
//

#include <iostream>
#include "Graph.h"

int main() {
    int n = 0;
    std::cout<<"Undirected Graph Program"<<std::endl;
    std::cout<<std::endl;
    std::cout<<"Enter the number of verticies for your graph:"<<std::endl;
    std::cin>>n;
    std::cout<<std::endl;
    std::cout<<std::endl;
    
    Graph myGraph(n);
    int exitCode = 0;
    while(exitCode != 1){
        int selection = 0;
        std::cout<<"Undirected Graph Program"<<std::endl;
        std::cout<<std::endl;
        std::cout<<"Select an item from the menu below:"<<std::endl;
        std::cout<<"1. Insert an edge."<<std::endl;
        std::cout<<"2. Delete an edge."<<std::endl;
        std::cout<<"3. Print adjacency matrix."<<std::endl;
        std::cout<<"4. List all verticies that are adjacent to a specific vertex."<<std::endl;
        std::cout<<"5. Print out verticies using depth first search."<<std::endl;
        std::cout<<"6. Print out verticies using depth first search."<<std::endl;
        std::cout<<"7. Check for connectivity."<<std::endl;
        std::cout<<"8. Check for completeness."<<std::endl;
        std::cout<<"9. Exit program."<<std::endl;
        
        std::cin>>selection;
        
        int v, w;
        switch (selection) {
            case 1:
                std::cout<<std::endl;
                std::cout<<"Enter the verticies you would like to connect:"<<std::endl;
                std::cin>>v>>w;
                myGraph.AddEdge(v, w);
                break;
            case 2:
                std::cout<<std::endl;
                std::cout<<"Enter the verticies you would like to disconnect:"<<std::endl;
                std::cin>>v>>w;
                myGraph.DeleteEdge(v, w);
                break;
            case 3:
                std::cout<<std::endl;
                myGraph.PrintMatrix();
                break;
            case 4:
                std::cout<<std::endl;
                //TODO option 4
                break;
            case 5:
                std::cout<<std::endl;
                //TODO option 5
                break;
            case 6:
                std::cout<<std::endl;
                //TODO option 6
                break;
            case 7:
                std::cout<<std::endl;
                //TODO option 7
                break;
            case 8:
                std::cout<<std::endl;
                //TODO option 8
                break;
            case 9:
                std::cout<<std::endl;
                exitCode = 1;
                break;
            default:
                break;
        }
        
        std::cout<<std::endl;
        std::cout<<std::endl;
    }
}
