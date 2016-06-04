//
//  List.cpp
//  COMP280_Assignment2
//
//  Created by Christopher Cannon on 04/Jun/16.
//

#include <iostream>
#include "List.h"

List::List(){
    first = new node;
    first->data = NULL;
}

bool List::Empty(){
    if (first->data == NULL)
        return true;
    return false;
}

void List::InsertAtEnd(ElementType x){
    node* current = first;
    while(current->data != NULL){
        current = current->next;
    }
    node* newNode = new node;
    current->next = newNode;
    newNode->data = x;
}

void List::Delete(ElementType x){
    node* current = first;
    node* nextNode = current->next;
    while(nextNode->data != x && nextNode->next != NULL){
        current = current->next;
        nextNode = nextNode->next;
    }
    current->next = nextNode->next;
    delete nextNode;
}

void List::Display(){
    node* current = first;
    do {
        std::cout<<current->data<<std::endl;
    } while (current->next != NULL);
}

int List::Sum(){
    node* current = first;
    int sum = 0;
    do {
        sum += current->data;
    } while (current->next != NULL);
    return sum;
}

double List::Average(){
    node* current = first;
    double sum = 0.0;
    double count = 0;
    
    do {
        sum += current->data;
        count ++;
    } while (current->next != NULL);
    return sum / count;
}