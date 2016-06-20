//
//  main.cpp
//  COMP280_Assignment4
//
//  Created by Christopher Cannon on 6/19/16.
//

#include <iostream>
#include "BinarySearchTree.h"

int main() {
    BinarySearchTree myOrders;
    
    myOrders.Insert(4);
    myOrders.Insert(3);
    myOrders.Insert(2);
    myOrders.Insert(3);
    myOrders.Insert(7);
    myOrders.Insert(2);
    myOrders.Insert(2);
    myOrders.Insert(5);
    myOrders.Insert(2);
    myOrders.Insert(1);
    myOrders.Insert(3);
    myOrders.Insert(3);
    myOrders.Insert(5);
    myOrders.Insert(5);
    
    myOrders.Display();
}
