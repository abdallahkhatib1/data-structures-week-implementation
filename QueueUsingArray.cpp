#include <iostream>
using namespace std;

class QueueArray {
private:
    int* arr;
    int front;
    int rear;
    int capacity;

public:
    QueueArray(int size) {
        capacity = size;
        arr = new int[capacity];
        front = 0;
        rear = -1;
    }

    void enqueue(int value) {
        if (rear == capacity - 1) {
            cout << "Queue is full" << endl;
            return;
        }
        rear++;
        arr[rear] = value;
    }

    void dequeue() {
        if (front > rear) {
            cout << "Queue is empty" << endl;
            return;
        }
        front++;
    }

    void display() {
        if (front > rear) {
            cout << "Queue is empty" << endl;
            return;
        }
        cout << "Queue: ";
        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    ~QueueArray() {
        delete[] arr;
    }
};

