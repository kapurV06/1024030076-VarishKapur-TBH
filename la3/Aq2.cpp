// 2. Design a stack that supports getMin() in O(1) time and O(1) extra space. 
#include<iostream>
#include<stack>
using namespace std;
class Stack {
      stack<int>s; 
           stack<int>min; 
public:
    void push(int x){
          s.push(x);
      
         if(min.empty()|| x<= min.top()) {
           
            min.push(x);
        }
         
         else{
            min.push(min.top());
        }
    }
         int getmin() {
               if(min.empty()) {
                      return -1;
            }
           return min.top();
       }
};

int main() {
    Stack s;
     s.push(14);
       s.push(39);
    s.push(29);
     s.push(35);
    s.push(19);

    cout<<s.getmin()<< endl;

    return 0;
}
