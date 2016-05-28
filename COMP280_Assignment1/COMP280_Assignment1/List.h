//
//  List.h
//  COMP280_Assignment1
//
//  Created by Christopher Cannon on 26/May/16.
//

//file: List.h
typedef int ElementType;
const int MAX = 100;
class List
{
public:
    List(); //Create an empty list
    bool Empty(); // return true if the list is empty, otherwise return false
    void InsertAtEnd(ElementType x); //insert a value x on the end of the list
    void Delete(ElementType x); //if value x is in the list, remove x
    void Display(); //Display the data values in the list in the order inserted
    int Sum(); // Compute and return the sum of the values in the list
    int Average(); // Compute and return the average of the values in the list
    
private:
    int N; //number of values in list
    ElementType listArray[MAX]; //the array to hold the list values
};

