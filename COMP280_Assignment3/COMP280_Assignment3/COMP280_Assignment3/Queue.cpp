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
    if(myfront->data == NULL)
        return true;
    return false;
}

void Queue::AddQ(QueueElement x){
    if(empty()){
        myfront->data = x;
        myfront->next = myback;
    }else if(myback->data == NULL){
        myback->data = x;
    }else{
        qnode* newQ = new qnode();
        newQ->data = x;
        myback->next=newQ;
        myback=newQ;
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
    if(empty()){
        std::cout<<"This queue is empty."<<std::endl;
    }else{
        qnode* current = new qnode();
        current = myfront;
        std::cout<<current->data<<std::endl;
        while(current != myback){
            current = current->next;
            std::cout<<current->data<<std::endl;
        }
    }
    std::cout<<std::endl;
}
