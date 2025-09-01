#include <iostream>
#include <vector>
#include<stack>
using namespace std;
vector<int>nearestSmaller(vector<int>& A) {
     int n =A.size();
    vector<int>result(n, -1);
      stack<int>st;
           for(int i =0; i< n; i++) {
      
        while(!st.empty() && st.top() >=A[i]) {
            st.pop();

          
        }
         if (!st.empty()) {
              result[i]= st.top();
        }
         st.push(A[i]);
    }
     return result;
}

int main(){
    vector<int>A ={4, 5, 2, 10, 8};
  
    vector<int> ans = nearestSmaller(A);

    cout<< "Nearest smaller elements: ";
    for(int i =0;i <ans.size(); i++) {
        cout<< ans[i] << " ";
    }
    cout << endl;
    return 0;
}
