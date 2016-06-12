//
//  Stack.cpp
//  COMP280_Assignment3
//
//  Created by Christopher Cannon on 10/Jun/16.
//

#include "Stack.h"

Stack::Stack(){
    mytop = new node();
    mytop->data = NULL;
    mytop->next = NULL;
}

bool Stack::empty(){
    if(mytop->data == NULL)
        return true;
    return false;
}

void Stack::push(StackElement x){
    if(empty()){
        mytop->data = x;
    }else{
        node* oldTop = mytop;
        node* newTop = new node();
        newTop->data = x;
        newTop->next = oldTop;
        mytop = newTop;
    }
}

bool Stack::Top(StackElement & x){
    return true;
}

void Stack::pop(){
    node* popped = new node();
    popped = mytop;
    mytop = mytop->next;
    delete popped;
}

void Stack::display(){
    
}
