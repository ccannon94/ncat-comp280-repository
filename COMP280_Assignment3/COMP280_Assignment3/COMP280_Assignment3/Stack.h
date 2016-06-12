//
//  Stack.h
//  COMP280_Assignment3
//
//  Created by Christopher Cannon on 10/Jun/16.
//


#include <iostream>
typedef int StackElement;

struct node
{
    StackElement data;
    node* next;
};

class Stack
{
public:
    Stack(); // create an empty stack
    bool empty(); //return true if stack is empty, otherwise return false
    void push(StackElement x); //add a new value to the top of the stack
    int Top(StackElement & x); //retrieves the data that is at the top of the stack
    void pop(); //removes the value at the top of the stack
    void display(); //displays the data stored in the stack
    
private:
    node* mytop; //pointer to the top of the stack
};