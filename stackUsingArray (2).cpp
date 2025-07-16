#include <iostream>
using namespace std;

class StackArray {
private:
    int arr[100];
    int topIndex;

public:
    StackArray() {
        topIndex = -1;
    }

    void push(int value) {
        if (topIndex >= 99) {
            return;
        }
        topIndex++;
        arr[topIndex] = value;
    }

    void pop() {
        if (topIndex == -1) {
            return;
        }
        topIndex--;
    }

    void print() {
        for (int i = topIndex; i >= 0; i--) {
            cout << arr[i] << endl;
        }
    }
};

