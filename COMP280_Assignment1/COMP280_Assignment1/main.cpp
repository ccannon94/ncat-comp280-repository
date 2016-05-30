//
//  main.cpp
//  COMP280_Assignment1
//
//  Created by Christopher Cannon on 26/May/16.
//

#include <iostream>
#include "List.h"

int main() {
    
    List myList;
    
    std::cout<<"Main Menu \n 1. Insert \n 2. Delete \n 3.Display \n 4. Sum \n 5. Average \n 6. Exit \n";
    std::cout<<"Enter the number of the menu item you would like to select \n";
    
    int menuSelection;
    
    std::cin>>menuSelection;
    
    ElementType inValue;
    
    
    if (menuSelection == 1) {
        std::cout<<"\nEnter the value you would like to add: \n";
        
        std::cin>>inValue;
        myList.InsertAtEnd(inValue);
    }else if (menuSelection == 2){
        std::cout<<"\nEnter the value you would like to delete: \n";
        
        ElementType delValue;
        std::cin>>delValue;
        
        myList.Delete(delValue);
    }else if (menuSelection == 3){
        myList.Display();
    }else if (menuSelection == 4){
        myList.Sum();
    }else if (menuSelection == 5){
        myList.Average();
    }else{
        exit(0);
    }
    
}

