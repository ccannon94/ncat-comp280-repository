//
//  Queue.h
//  COMP280_Assignment3
//
//  Created by Christopher Cannon on 10/Jun/16.
//

#include <iostream>
typedef int QueueElement;

struct qnode
{
    QueueElement data;
    qnode* next;
};

class Queue
{
public:
    Queue(); // create an empty Queue
    bool empty(); //return true if Queue is empty, otherwise return false
    void AddQ(QueueElement x); //add a new value to the back of the Queue
    bool Front (QueueElement & x); //retrieve the data at the front of the Queue
    void RemoveQ(); //remove the value at the front of the Queue
    void display(); //displays the data stored in the Queue from front to back
    
private:
    qnode* myfront; //pointer to the front of the queue
    qnode* myback; //pointer to the back of the queue
};