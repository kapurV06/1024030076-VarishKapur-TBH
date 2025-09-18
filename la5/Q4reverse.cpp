#include<iostream>
using namespace std;

class Node{
    public : 
    int data;
    Node* next;
    
    Node(int data){
        this->data = data;
        this->next = NULL;
    }

    };
    Node* middle(Node* head){
        
        
        while(curr != NULL){
            forward = curr -> next;
            curr->next = prev;
            prev = curr;
            curr= forward;
        }
        return prev;
    };
    int main(){
        Node* head = new Node(1);
        head->next = new Node(2);
        head->next->next = new Node(3);
        
         head = reverse(head);
        Node*temp = head;
        
       
        while(temp != NULL){
            cout<<temp->data<<" -> ";
            temp = temp->next;
            
        }
        return 0;
    }
