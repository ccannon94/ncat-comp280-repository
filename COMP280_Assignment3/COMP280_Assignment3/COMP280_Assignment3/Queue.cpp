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

bool Queue::Front(QueueElement & x){
    return true;
}

void Queue::RemoveQ(){
    qnode* removed = myfront;
    myfront = myfront->next;
    delete removed;
}

void Queue::display(){
    
}
