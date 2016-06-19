//
//  BinarySearchTree.h
//  COMP280_Assignment4
//
//  Created by Christopher Cannon on 6/19/16.
//

struct dish{
    int dishNumber;
    int counter;
};

typedef dish ElementType;
struct node
{
    ElementType data;
   	node * leftchild;
   	node * rightchild;
};

class BinarySearchTree
{
public:
    BinarySearchTree();
    bool empty(); // return true if the tree is empty, otherwise return false
    bool Insert(ElementType x);//insert a value x
    bool IsThere (ElementType  x);
    //return true if x is in the tree, otherwise return false
    void Display();
    //Display the data stored from smallest to largest based on dish number
    
private:
    node * root;//pointer to the root node
};
