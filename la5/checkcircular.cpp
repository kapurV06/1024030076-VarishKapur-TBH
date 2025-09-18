#include<iostream>
using namespace std;

class node{
public :
    int data;
    node* next;
    
    node(int n){
        data = n;
        next = NULL;
    }
};
 bool isCircular(node* pointer){
     node* temp = head->next;
     
     if(head == nullptr) return nullptr;
     
     while(temp != NULL && temp!= head){
         temp = temp->next;
     }
     if(temp == head) return true;
     return false;
 }
