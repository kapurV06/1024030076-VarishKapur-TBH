#include <iostream>
using namespace std;

class CircularQueue {
    int *arr;
    int front, rear, size;
public:
    CircularQueue(int n) {
        size= n;
        arr= new int[size];
        front =-1;
        rear= -1;
    }

    bool isEmpty() {
        return (front== -1);
    }

    bool isFull() {
        return (front ==0 && rear== size- 1) || (front ==rear +1);
    }

    void enqueue(int value) {
        if (isFull()) {
            cout <<"Full" << endl;
            return;
        }
        if (isEmpty()) {
            front =rear = 0;
        } else if (rear ==size - 1 && front != 0) {
            rear = 0;
        } else
        {
            rear++;
        }
        arr[rear] =value;
        cout <<value <<"inserted." << endl;
    }

    void dequeue() {
        if (isEmpty()) {
            cout<<"Empty" << endl;
            return;
        }
        cout <<arr[front] <<"removed."<<endl;
        if (front ==rear) {
            front= -1;
            rear =-1;
        } else if(front == size - 1) {
            front= 0;
        } else {
            front++;
        }
    }

    void display() {
        if (isEmpty()) {
            cout << " Empty" << endl;
            return;
        }
        cout << "Queue elements: ";
        if (rear >= front) {
            for (int i = front; i <= rear; i++)
                cout << arr[i] << " ";
        } else {
            for (int i = front; i < size; i++)
                cout << arr[i] << " ";
            for (int i = 0; i <= rear; i++)
                cout << arr[i] << " ";
        }
        cout << endl;
    }

    void peek() {
        if (isEmpty()) {
            cout << "Empty!" << endl;
        } else {
            cout << "Front element:"<<arr[front] << endl;
        }
    }
};
