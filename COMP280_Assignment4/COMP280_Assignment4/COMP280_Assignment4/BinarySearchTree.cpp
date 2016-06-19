//
//  BinarySearchTree.cpp
//  COMP280_Assignment4
//
//  Created by Christopher Cannon on 6/19/16.
//

#include "BinarySearchTree.h"

BinarySearchTree::BinarySearchTree(){
    root = new node();
    root->dishNumber = 0;
    root->counter = 0;
    root->leftchild = new node();
    root->rightchild = new node();
}

bool BinarySearchTree::empty(){
    if (root->dishNumber == 0)
        return true;
    return false;
}

void BinarySearchTree::Insert(int dishNum){
    node* current = root;
    node* insert = new node();
    insert->dishNumber = dishNum;
    while(insert->dishNumber != current->dishNumber &&
        current->dishNumber != 0){
        if(insert->dishNumber < current->dishNumber){
            current = current->leftchild;
        }else{
            current = current->rightchild;
        }
    }
    current->dishNumber = insert->dishNumber;
    current->counter++;
}