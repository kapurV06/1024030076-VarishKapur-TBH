#include<iostream>
#include<vector>
using namespace std;
vector<int>large(vector<int> &arr){
       int n = arr.size();
    vector<int> arr1(n,-1);
    for(int i=0;i< n;i ++){
        for(int j = i+ 1; j <n; j++) {
            if (arr[j] >arr[i])
            {
                arr1[i]= arr[j];
                break;
            }
        }
    }
    return arr1;
}
int main() {
    vector<int> arr1 = {4,6, 9, 1, 2};
      vector<int> arr2 = large(arr);
      for (int x : arr2) {
            cout << x << " ";
    }

    return 0;
}
