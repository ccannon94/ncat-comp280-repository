//
//  Stack.cpp
//  COMP280_Assignment3
//
//  Created by Christopher Cannon on 10/Jun/16.
//

#include "Stack.h"

// create an empty stack
Stack::Stack(){
    mytop = new node();
    mytop->data = NULL;
    mytop->next = NULL;
}

//return true if stack is empty, otherwise return false
bool Stack::empty(){
    if(mytop->data == NULL)
        return true;
    return false;
}

//add a new value to the top of the stack
void Stack::push(StackElement x){
    //if list is empty, I simply need to add the data to the top node
    if(empty()){
        mytop->data = x;
    }
    //for populated list, place this value on top and move up top pointer
    else{
        //creating pointer to top
        node* oldTop = mytop;
        //creating new value
        node* newTop = new node();
        newTop->data = x;
        //moving up the top
        newTop->next = oldTop;
        mytop = newTop;
    }
}

//retrieves the data that is at the top of the stack
int Stack::Top(StackElement & x){
    return mytop->data;
}

//removes the value at the top of the stack
void Stack::pop(){
    //if this is the last node, preserve it
    if(mytop->next == NULL){
        mytop->data = NULL;
    }
    //delete unneeded nodes after removing value
    else{
        //create new node to reference value to be deleted
        node* popped = new node();
        popped = mytop;
        //move down top pointer
        mytop = mytop->next;
        //delete reference
        delete popped;
    }
}

//displays the data stored in the stack
void Stack::display(){
    std::cout<<std::endl;
    //first, check empty
    if(empty()){
        std::cout<<"The stack is empty."<<std::endl;
    }
    //if populated, increment and display each value
    else{
        node* current = new node();
        current = mytop;
        std::cout<<current->data<<std::endl;
        while(current->next != NULL){
            current = current->next;
            std::cout<<current->data<<std::endl;
        }
    }
    std::cout<<std::endl;
}
