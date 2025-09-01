#include<iostream>
#include <stack>
using namespace std;
bool isB(string exp) {
    stack<char> st;

    for (int i =0; i< exp.length();i++) {
        char c =expr[i];
        if (c =='('|| c=='{'|| c== '[') {
            st.push(c);
        } 
else {  
  if (st.empty()) return false;
       char top =st.top();
        if ((c ==')' && top =='(') || (c== '}' && top =='{') || (c== ']' && top== '[')) {
                  st.pop();
            } 
else {
         return false;
            }
        }
    }
    return st.empty();
}

int main() {
    string expr = "{[()]}";
    cout << (isBalanced(expr) ? "Balanced" : "Not Balanced") << endl;
    return 0;
}
