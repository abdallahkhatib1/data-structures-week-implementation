#include <iostream>
using namespace std;

class Node {
public:
    int value;
    Node* next;

    Node(int v) {
        value = v;
        next = nullptr;
    }
};

class CircularLinkedList {
private:
    Node* tail;
    int size;

public:
    CircularLinkedList() {
        tail = nullptr;
        size = 0;
    }

    bool isEmpty() {
        return tail == nullptr;
    }

    void addLast(int val) {
        Node* node = new Node(val);
        if (isEmpty()) {
            node->next = node;
            tail = node;
        }
        else {
            node->next = tail->next;
            tail->next = node;
            tail = node;
        }
        size++;
    }

    void addFirst(int val) {
        Node* node = new Node(val);
        if (isEmpty()) {
            node->next = node;
            tail = node;
        }
        else {
            node->next = tail->next;
            tail->next = node;
        }
        size++;
    }

    void removeFirst() {
        if (isEmpty()) {
            return;
        }

        Node* head = tail->next;
        if (tail == head) {
            delete head;
            tail = nullptr;
        }
        else {
            tail->next = head->next;
            delete head;
        }
        size--;
    }

    void display() {
        if (isEmpty()) {
            return;
        }
        Node* temp = tail->next;
        cout << "List: ";
        do {
            cout << temp->value << " ";
            temp = temp->next;
        } while (temp != tail->next);
    }

    ~CircularLinkedList() {
        while (!isEmpty()) {
            removeFirst();
        }
    }
};

