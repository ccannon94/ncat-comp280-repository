//
//  main.cpp
//  test1
//
//  Created by Christopher Cannon on 03/Jun/16.
//  Copyright © 2016 TheTechCannon. All rights reserved.
//

#include <iostream>


typedef int elementType;

//creates object node with two properties, data and a pointer
struct node{
    int data;
    node* next;
};

int main(){
    
    //creates a new pointer named n
    node* n;
    //points n towards a new node object
    n = new node;
    n->data = 5;
    
    //creates a pointer named p
    node* p;
    //had p point towards the same node as n
    p = n;
    
    //n now points to a new node, p remains pointing to the previous node
    n = new node;
    n->data = 2;
    
    //points the next data in the node p is pointing towards at n
    p->next = n;
    
    //moves p to face n, the next node in line
    p = p->next;
}