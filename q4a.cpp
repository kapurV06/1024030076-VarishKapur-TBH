#include<iostream>
using namespace std;
int main() {
    int arr[100], n, temp;
    cout <<"Enter number of elements: ";
    cin>> n;
    for(int i = 0;i < n;i++)
        cin >> arr[i];
    for (int i= 0;i <n / 2; i++) {
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
    cout << "Reversed array: ";
    for (int i =0; i< n; i++)
        cout<<arr[i] <<" ";
}
