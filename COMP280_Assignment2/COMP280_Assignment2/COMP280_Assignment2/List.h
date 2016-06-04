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
    List();
    bool Empty();
    void InsertAtEnd(ElementType x);
    void Delete(ElementType x);
    void Display();
    int Sum();
    double Average();
    
private:
    node* first;
};

#endif /* List_h */
