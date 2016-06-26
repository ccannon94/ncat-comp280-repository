//
//  main.cpp
//  COMP280_Assignment5
//
//  Created by Christopher Cannon on 6/26/16.
//

#include <iostream>

int main() {
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
        
        switch (selection) {
            case 1:
                //TODO option 1
                break;
            case 2:
                //TODO option 2
                break;
            case 3:
                //TODO option 3
                break;
            case 4:
                //TODO option 4
                break;
            case 5:
                //TODO option 5
                break;
            case 6:
                //TODO option 6
                break;
            case 7:
                //TODO option 7
                break;
            case 8:
                //TODO option 8
                break;
            case 9:
                exitCode = 1;
                break;
            default:
                break;
        }
    }
}
