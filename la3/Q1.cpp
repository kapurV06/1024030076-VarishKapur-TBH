#include<iostream>
using namespace std;
# define MAXLEN 100;

class stack{
    int element[5];
    int top = -1;
    public:
        int isFull(){
            if (top = MAXLEN - 1) return 1;
            else return 0;
        }
        void push(int x){
            if(top == MAXLEN - 1){
                cout<<"overflow";
            }
            else{
                top++;
                element[top] = x;
            }
        }
        void display(){
            for(int i = top; i >=0; i--){
                cout<<element[i];
            }
        }
          void peek(){
            cout<<element[top];
          }
          void pop(){
            if(top == -1){
                cout<<'underflow';

            }
            else{
                top--;
            }
          }

};
int main(){
    stack s;

    for(int i = 0 ; i < 5; i++){
        s.push(10+i);
    }
    s.pop();
    s.peek();
    s.display();
}