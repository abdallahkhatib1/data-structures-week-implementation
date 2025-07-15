#include <iostream>
using namespace std;

class DynamicArray {
private:
    int* arr;
    int capacity;
    int size;

    void resize() {
        capacity *= 2;
        int* newArr = new int[capacity];
        for (int i = 0; i < size; i++)
            newArr[i] = arr[i];

        delete[] arr;
        arr = newArr;
    }

public:
    DynamicArray() {
        capacity = 4; 
        size = 0;
        arr = new int[capacity];
    }

    ~DynamicArray() {
        delete[] arr;
    }

    void push(int value) {
        if (size == capacity)
            resize();
        arr[size++] = value;
    }

    void pop() {
        if (size > 0)
            size--;
    }

    int get(int index) const {
        if (index >= 0 && index < size)
            return arr[index];
        else cout << "invalid input" << endl;
    }

    int getSize() const {
        return size;
    }

    void print() const {
        for (int i = 0; i < size; i++)
            cout << arr[i] << " " << endl;
    }
};

int main() {
    DynamicArray da;
    da.push(10);
    da.push(20);
    da.push(30);
    da.push(40);
    da.push(50); 

    da.print(); 

    da.pop();
    da.print(); 

    cout  << da.get(2) << endl; 

    return 0;
}
