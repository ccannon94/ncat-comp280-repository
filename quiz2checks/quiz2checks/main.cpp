#include<iostream>

using namespace std;



struct node{
    
    int data;
    
    node* next;
    
};

int main(){
    
    node * first = new node;
    
    first->data = 23;
    
    first->next = new node;
    
    node * p = first->next;
    
    p->data = 46;
    
    p->next = NULL;
    
    p = new node;
    
    p->data = 75;
    
    p->next = first;
    
    first = p;
    
    while (p!=NULL){
        
        cout<<p->data<<" ";
        
        p=p->next;
        
    }
    
}