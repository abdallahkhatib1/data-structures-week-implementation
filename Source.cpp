#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

class StackList {
private:
    Node* topNode;

public:
    StackList() {
        topNode = nullptr;
    }

    void push(int value) {
        Node* newNode = new Node(value);
        newNode->next = topNode;
        topNode = newNode;
    }

    void pop() {
        if (topNode == nullptr) {
            return;
        }
        Node* temp = topNode;
        topNode = topNode->next;
        delete temp;
    }

    void print() {
        Node* current = topNode;
        while (current != nullptr) {
            current = current->next;
        }
    }
};
