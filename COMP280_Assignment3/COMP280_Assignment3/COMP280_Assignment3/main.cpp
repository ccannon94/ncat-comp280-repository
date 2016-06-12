//
//  main.cpp
//  COMP280_Assignment3
//
//  Created by Christopher Cannon on 10/Jun/16.
//

#include "Stack.h"
#include "Queue.h"
#include <iostream>

using namespace std;
int main()
{
    Stack S;
    Queue Q;
    
    // insert values 10, 20, 30, 40 and 50 onto the stack
    for(int x = 1; x<=5; x++){
        int n = x*10;
        S.push(n);
        Q.AddQ(n);
    }
    
    
    //Display the content of the stack and queue to the screen
    std::cout<<"Contents of Stack"<<std::endl;
    S.display();
    std::cout<<endl<<std::endl;
    std::cout<<"Contents of Queue"<<std::endl;
    Q.display();
    std::cout<<endl<<std::endl;
    

    //Remove and display each value on the stack
    std::cout<<"Removing values from Stack"<<std::endl;
    while (!S.empty())
    {    int x;
        S.Top(x);
        std::cout<<std::endl;
        std::cout<<"Popping --- "<<x<<endl;
        S.pop();
        S.display();
    }
    
    if (S.empty())
        std::cout<<"Stack is empty."<<std::endl;
    
    
    //Remove and display each values on the Queue
    std::cout<<"Removing values from Queue"<<std::endl;
    while (!Q.empty())
    {    int x;
        Q.Front(x);
        std::cout<<std::endl;
        std::cout<<"Removing --- "<<x<<endl;
        Q.RemoveQ();
        Q.display();
    }
    
    if (Q.empty())
        std::cout<<"Queue is empty."<<std::endl;
}
