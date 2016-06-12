//
//  Queue.cpp
//  COMP280_Assignment3
//
//  Created by Christopher Cannon on 10/Jun/16.
//

#include "Queue.h"

// create an empty Queue
Queue::Queue(){
    myfront = new qnode();
    myfront->data = NULL;
    myfront->next = NULL;
    myback = myfront;
}

//return true if Queue is empty, otherwise return false
bool Queue::empty(){
    if(myfront->data == NULL)
        return true;
    return false;
}

//add a new value to the back of the Queue
void Queue::AddQ(QueueElement x){
    //if list isn't populated, assign this value to myfront
    if(empty()){
        myfront->data = x;
        myfront->next = myback;
    }
    //if myback isnt populated, assign this value to myback
    else if(myback->data == NULL){
        myback->data = x;
    }
    //if fully populated, add it to the back
    else{
        //creates new node with given value
        qnode* newQ = new qnode();
        newQ->data = x;
        //adds to the back
        myback->next=newQ;
        //moves down back pointer
        myback=newQ;
    }
}

//retrieve the data at the front of the Queue
int Queue::Front(QueueElement & x){
    return myfront->data;
}

//remove the value at the front of the Queue
void Queue::RemoveQ(){
    //if this is the last node, preserve it
    if(myfront->next == NULL){
        //just set value to NULL
        myfront->data = NULL;
        myback = myfront;
    }
    //removes node completely
    else{
        //creates reference to front of the queue
        qnode* removed = myfront;
        //moves the front pointer back
        myfront = myfront->next;
        //deletes the referenced node
        delete removed;
    }
}

//displays the data stored in the Queue from front to back
void Queue::display(){
    std::cout<<std::endl;
    //first, check empty
    if(empty()){
        std::cout<<"This queue is empty."<<std::endl;
    }
    //if populated, increment and display each one
    else{
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
