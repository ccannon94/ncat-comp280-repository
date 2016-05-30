//
//  List.cpp
//  COMP280_Assignment1
//
//  Created by Christopher Cannon on 29/May/16.
//

#include <iostream>
#include "List.h"

List::List(){
    ElementType listArray[MAX];
    N = 0;
}

bool List::Empty(){
    if (N == 0){
        return true;
    }else{
        return false;
    }
}

void List::InsertAtEnd(ElementType x){
    listArray[N] = x;
}

void List::Delete(ElementType x){
    //TODO create delete method
    //if value x is in the list, remove x
    for(int i = 0; i < MAX; i++){
        if(listArray[i] == x){
            listArray[i] = 0;
            N--;
        }
    }
}

void List::Display(){
    for (int i = 0; i < MAX; i++) {
        std::string s = std::to_string(listArray[i]);
        std::cout<<"\n" + s;
    }
}

int List::Sum(){
    int sum = 0;
    for(int i = 0; i < MAX; i++){
        sum += listArray[i];
    }
    return sum;
}

int List::Average(){
    int sum = 0;
    for(int i = 0; i < MAX; i++){
        sum += listArray[i];
    }
    return sum/N;
}