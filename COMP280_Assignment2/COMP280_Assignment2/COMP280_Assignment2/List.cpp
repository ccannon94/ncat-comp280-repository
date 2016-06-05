//
//  List.cpp
//  COMP280_Assignment2
//
//  Created by Christopher Cannon on 04/Jun/16.
//

#include <iostream>
#include "List.h"

//Default constructor, creates an empty list
List::List(){
    first = new node;
    first->data = NULL;
    first->next = NULL;
}

//return true if the list is empty, otherwise return false
bool List::Empty(){
    if (first->data == 0)
        return true;
    return false;
}

//Insert a value x on the end of the list
void List::InsertAtEnd(ElementType x){
    //Initial check for empty list, will automatically assign value to the first node
    if(Empty()){
        first->data = x;
    }else{
        //increments through until current is the last occupied node
        node* current = first;
        while(current->next != NULL){
            current = current->next;
        }
        //creates a new node after current to be added
        node* newNode = new node;
        
        //adds newNode and assigns the value to it
        current->next = newNode;
        newNode->data = x;
        newNode->next = NULL;
    }
}

//If value x is in the list, remove x
void List::Delete(ElementType x){
    node* current = first;
    
    //if first node contains the value, it is deleted
    if(current->data == x){
        first = first->next;
        delete current;
    }
    
    //then, traverse and search the list
    //NOTE: this will still search the list even if the first node is deleted, because the value may appear again
    while(current->next != NULL){
        //checks nextNode for value x, deletes if found
        node* nextNode = current->next;
        if(nextNode->data == x){
            current->next = nextNode->next;
            delete nextNode;
        }

        //traverse to next set
        current = current->next;
    }
    
}

//Display the data values in the list in the order inserted
void List::Display(){
    //Checks for empty list
    if(Empty()){
        std::cout<<"\nYour list is empty\n";
    }
    
    //Traverses populated list, displaying each value
    else{
        std::cout<<"\nYour list contains: \n";
        node* current = first;
        std::cout<<current->data<<std::endl;
    
        //Increments list, displaying each additional value in list
        while (current->next != NULL){
            current = current->next;
            std::cout<<current->data<<std::endl;
        }
    }
}

//Compute and return the sum of the values in the list
int List::Sum(){
    //Initial check for empty list, will save processor cycles by immediately returning 0
    if (Empty())
        return 0;
    
    //Traverses list, adding values to sum
    node* current = first;
    int sum = 0;
    sum +=current->data;
    while(current ->next != NULL){
        current = current->next;
        sum += current->data;
    }
    
    return sum;
}

//Compute and return the average of the values in the list
double List::Average(){
    //Initial check for empty list, will save processor cycles by immediately returning 0
    if (Empty())
        return 0.0;
    
    //Traverses list, adding values to sum and incrementing count
    node* current = first;
    double sum = 0.0;
    double count = 0;
    
    sum += current->data;
    count++;
    while(current->next != NULL){
        current = current->next;
        sum += current->data;
        count++;
    }
    
    return sum / count;
}