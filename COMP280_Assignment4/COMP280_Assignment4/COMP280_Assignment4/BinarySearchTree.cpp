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
    root->leftchild = root->rightchild = nullptr;
    
    friedChickenCounter = 0;
    porkChopsCounter = 0;
    bakedChickenCounter = 0;
    grilledSalmonCounter = 0;
    roastBeefCounter = 0;
    grilledSteakCounter = 0;
    meatLoafCounter = 0;
}

bool BinarySearchTree::empty(){
    if (root->dishNumber == 0)
        return true;
    return false;
}

bool BinarySearchTree::Insert(int dishNum){
    node* p = root;
    node* q = nullptr;
    while(p != nullptr){
        q = p;
        if(dishNum == p->dishNumber){
            p->counter++;
            return false;
        }
        if(dishNum < p->dishNumber){
            p = p->leftchild;
        }else{
            p = p->rightchild;
        }
    }
    
    p = new node();
    p->dishNumber = dishNum;
    p->counter = 1;
    p->leftchild = p->rightchild = nullptr;
    
    if(root == nullptr)
        root = p;
    else if(dishNum < q->dishNumber)
        q->leftchild = p;
    else
        q->rightchild = p;
    
    return true;
}

bool BinarySearchTree::IsThere(int dishNum){
    if(root->dishNumber == 0)
        return false;
    if(root->dishNumber == dishNum)
        return true;
    node* p = root;
    while(p->dishNumber != dishNum && p != nullptr){
        if(dishNum < p->dishNumber)
            p = p->leftchild;
        else
            p = p->rightchild;
    }
    if (p->dishNumber == dishNum)
        return true;
    return false;
}

void BinarySearchTree::Display(){
    Inorder(root);
    
    std::cout<<"List of all dishes ordered:"<<std::endl;
    std::cout<<"1 - Fried Chicken: "<<friedChickenCounter<<" order/s"<<std::endl;
    std::cout<<"2 - Pork Chops: "<<porkChopsCounter<<" order/s"<<std::endl;
    std::cout<<"3 - Baked Chicken: "<<bakedChickenCounter<<" order/s"<<std::endl;
    std::cout<<"4 - Grilled Salmon: "<<grilledSalmonCounter<<" order/s"<<std::endl;
    std::cout<<"5 - Roast Beef: "<<roastBeefCounter<<" order/s"<<std::endl;
    std::cout<<"6 - Grilled Steak: "<<grilledSteakCounter<<" order/s"<<std::endl;
    std::cout<<"7 - Meat Loaf: "<<meatLoafCounter<<" order/s"<<std::endl;
}

void BinarySearchTree::SetCount(node* dish){
    if (dish->dishNumber == 1) {
        friedChickenCounter = dish->counter;
    }else if(dish->dishNumber == 2){
        porkChopsCounter = dish->counter;
    }else if(dish->dishNumber == 3){
        bakedChickenCounter = dish->counter;
    }else if(dish->dishNumber == 4){
        grilledSalmonCounter = dish->counter;
    }else if(dish->dishNumber == 5){
        roastBeefCounter = dish->counter;
    }else if(dish->dishNumber == 6){
        grilledSteakCounter = dish->counter;
    }else if(dish->dishNumber == 7){
        meatLoafCounter = dish->counter;
    }
}

void BinarySearchTree::Inorder(node* inNode){
    if(inNode == nullptr)
        return;
    Inorder(inNode->leftchild);
    
    SetCount(inNode);
    
    Inorder(inNode->rightchild);
}