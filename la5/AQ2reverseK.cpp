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

node* reverseK(node* head , int k){
    node* curr = head;
    node* prev =  NULL;
    node* forward = NULL;
    int count = 0;
    while(curr != NULL && count < k ){
        forward = curr->next;
        curr->next = prev;
        prev= curr;
        curr= forward;
        count++;
    
    }
    if( forward != NULL ) {
        head->next = reverseK(forward, k);
    }
    return prev;
    
}
