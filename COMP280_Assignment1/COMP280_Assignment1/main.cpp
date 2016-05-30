//
//  main.cpp
//  COMP280_Assignment1
//
//  Created by Christopher Cannon on 26/May/16.
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

int main(int argc, const char * argv[]) {
    std::string menuArray[6];
    menuArray[0] = "1. Insert";
    menuArray[1] = "2. Delete";
    menuArray[2] = "3. Display";
    menuArray[3] = "4. Sum";
    menuArray[4] = "5. Average";
    menuArray[5] = "6. Exit";
    std::cout<<"Main Menu \n 1. Insert \n 2. Delete \n 3.Display \n 4. Sum \n 5. Average \n 6. Exit \n";
    std::cout<<"Enter the number of the menu item you would like to select \n";
    
    
}

