#include<iostream>
using namespace std;
int main(){
    int k =2;
int arr[] = {1,2,3,4,5,6,7};
int count =  0 ;
int n = sizeof(arr)/sizeof(arr[0]);
for(int i = 0 ; i <n ; i++){
    for(int j = i + 1; j < n; j++){
        if(abs(arr[i] - arr[j]) == k)
        {
            count++;
        }
    }
}

cout<<count;
}