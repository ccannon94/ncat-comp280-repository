//
//  BinarySearchTree.h
//  COMP280_Assignment4
//
//  Created by Christopher Cannon on 6/19/16.
//

#include <iostream>

struct node
{
    int dishNumber;
    int counter;
   	node* leftchild;
   	node* rightchild;
};

class BinarySearchTree
{
public:
    BinarySearchTree();
    bool empty(); // return true if the tree is empty, otherwise return false
    bool Insert(int dishNum);//insert a value dishNum
    bool IsThere (int dishNum);
    //return true if dishNum is in the tree, otherwise return false
    void Display();
    //Display the data stored from smallest to largest based on dish number
    void SetCount(node* dish); //assign the total dish count to the appropriate dish
    void Inorder(node* inNode); //Inorder traversal of tree
    
private:
    node * root;//pointer to the root node
    int friedChickenCounter;
    int porkChopsCounter;
    int bakedChickenCounter;
    int grilledSalmonCounter;
    int roastBeefCounter;
    int grilledSteakCounter;
    int meatLoafCounter;
};
