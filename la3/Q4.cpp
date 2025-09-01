#include<iostream>
#include<stack>
using namespace std;
int pre(char op) {
      if(op =='+' || op == '-') return 1;
       if (op =='*' || op =='/') return 2;
    if (op =='^')
    {
      return 3;
    }
    return 0;
}

string infixToPostfix(string expr) {
          stack<char>st;
    string result ="";
       for (int i =0; i <expr.length(); i++) {
             char c = expr[i];

           if (isalnum(c)) {
                result += c;
        } 
     else if (c =='(') {
        st.push(c);
        } 
          else if (c == ')') {
              while (!st.empty() && st.top() != '(') {
        result += st.top();
                  st.pop();
            }
            st.pop(); 
        } 
        else {
            while (!st.empty() && pre(st.top()) >= pre(c)) {
                result += st.top();
                st.pop();
            }
            st.push(c);
        }
    }
    while(!st.empty()) {
        result +=st.top();
        st.pop();
    }
    return result;
}

int main() {
    string expr ="A+B*(C^D-E)";
    cout<< "Infix:"<<expr <<endl;
    cout << "Postfix "<< infixToPostfix(expr) << endl;
    return 0;
}
