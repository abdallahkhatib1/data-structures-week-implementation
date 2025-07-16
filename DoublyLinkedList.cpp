#include <iostream>
using namespace std;

class Node {
public:
    int value;
    Node* prev;
    Node* next;

    Node(int val) {
        value = val;
        prev = nullptr;
        next = nullptr;
    }
};

class DoublyLinkedList {
private:
    Node* head;
    Node* tail;
    int size;

public:
    DoublyLinkedList() {
        head = tail = nullptr;
        size = 0;
    }

    bool isEmpty() {
        return size == 0;
    }

    void addFirst(int val) {
        Node* node = new Node(val);
        if (isEmpty()) {
            head = tail = node;
        } else {
            node->next = head;
            head->prev = node;
            head = node;
        }
        size++;
    }

    void addLast(int val) {
        Node* node = new Node(val);
        if (isEmpty()) {
            head = tail = node;
        } else {
            tail->next = node;
            node->prev = tail;
            tail = node;
        }
        size++;
    }

    int removeFirst() {
        if (isEmpty()) {
            return -1;
        }
        int val = head->value;
        Node* temp = head;
        head = head->next;
        if (head) head->prev = nullptr;
        else tail = nullptr;
        delete temp;
        size--;
        return val;
    }

    int removeLast() {
        if (isEmpty()) {
            return -1;
        }
        int val = tail->value;
        Node* temp = tail;
        tail = tail->prev;
        if (tail) tail->next = nullptr;
        else head = nullptr;
        delete temp;
        size--;
        return val;
    }

    void printForward() {
        Node* curr = head;
        while (curr != nullptr) {
            cout << curr->value << " ";
            curr = curr->next;
        }
    }

    void printBackward() {
        Node* curr = tail;
        while (curr != nullptr) {
            cout << curr->value << " ";
            curr = curr->prev;
        }
    }

    int getSize() {
        return size;
    }

    ~DoublyLinkedList() {
        while (!isEmpty()) {
            removeFirst();
        }
    }
};


