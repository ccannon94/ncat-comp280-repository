//
//  main.cpp
//  COMP280_Assignment2
//
//  Created by Christopher Cannon on 26/May/16.
//

#include <iostream>
#include "List.h"

int main() {
    
    List myList;
    
    //int that can trigger exit if runOperator == 1
    int runOperator = 0;
    
    do {
        //initial menu prompt, receives info from the user
        std::cout<<"Main Menu \n 1. Insert \n 2. Delete \n 3. Display \n 4. Sum \n 5. Average \n 6. Exit \n";
        std::cout<<"Enter the number of the menu item you would like to select \n";
    
        int menuSelection;
    
        std::cin>>menuSelection;
    
        //Declares variable of default type for list to be used by user in later prompts
        ElementType inValue;
    
    
        //Inserts value at the end of the list
        if (menuSelection == 1) {
            std::cout<<"\nEnter the value you would like to add: \n";
        
            std::cin>>inValue;
            myList.InsertAtEnd(inValue);
        }
        
        //Deletes a value from the list
        else if (menuSelection == 2){
            std::cout<<"\nEnter the value you would like to delete: \n";
        
            std::cin>>inValue;
        
            myList.Delete(inValue);
        }
        
        //Displays the current contents of the list
        else if (menuSelection == 3){
            myList.Display();
        }
        
        //Sums the values of the list
        else if (menuSelection == 4){
            std::string sumMessage ("\nThe sum of your list values is\n");
            std::string output = std::to_string(myList.Sum()) + "\n";
            std::cout<< sumMessage + output;
        }
        
        //Averages the values of the list
        else if (menuSelection == 5){
            std::string avgMessage ("\nThe average value of your list is\n");
            std::string output = std::to_string(myList.Average()) + "\n";
            std::cout<< avgMessage + output;
        }
        
        //Sets runOperator to 1 to terminate the loop
        else{
            runOperator = 1;
        }
        
        //Adds a blank line for formatting between output and the next menu prompt
        std::cout<<"\n";
    }while(runOperator != 1);
    
}