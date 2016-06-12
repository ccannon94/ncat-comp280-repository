//
//  Queue.cpp
//  COMP280_Assignment3
//
//  Created by Christopher Cannon on 10/Jun/16.
//

#include "Queue.h"

Queue::Queue(){
    myfront = new qnode();
    myfront->data = NULL;
    myfront->next = NULL;
    myback = myfront;
}

bool Queue::empty(){
    if(myfront == myback)
        return true;
    return false;
}

void Queue::AddQ(QueueElement x){
    if(empty()){
        myfront->data = x;
        myfront->next = myback;
    }else{
        qnode* newQNode = new qnode();
        newQNode->data = x;
        myback->next = newQNode;
        myback = newQNode;
    }
}

int Queue::Front(QueueElement & x){
    return myfront->data;
}

void Queue::RemoveQ(){
    qnode* removed = myfront;
    myfront = myfront->next;
    delete removed;
}

void Queue::display(){
    std::cout<<std::endl;
    qnode* current = new qnode();
    current = myfront;
    std::cout<<current->data<<std::endl;
    while(current != myback){
        std::cout<<current->data<<std::endl;
        current = current->next;
    }
    std::cout<<std::endl;
}
