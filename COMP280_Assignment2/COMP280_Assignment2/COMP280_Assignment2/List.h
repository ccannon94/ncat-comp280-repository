//
//  List.h
//  COMP280_Assignment2
//
//  Created by Christopher Cannon on 04/Jun/16.
//

#ifndef List_h
#define List_h

typedef int ElementType;

struct node{
    ElementType data;
    node* next;
};

class List{
public:
    List(); //Create an empty list
    bool Empty();   //return true if the list is empty, otherwise return false
    void InsertAtEnd(ElementType x);    //insert a value x on the end of the list
    void Delete(ElementType x); //if value x is on list, remove x
    void Display(); //display the data values in the list in the order inserted
    int Sum();  //compute and return the sum of the values in the list
    double Average();   //compute and return the average of the values in the list

private:
    node* first;    //pointer to the first node
};

#endif /* List_h */
