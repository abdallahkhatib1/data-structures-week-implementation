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

class SinglyLinkedList {
private:
    Node* head;

public:
    SinglyLinkedList() {
        head = nullptr;
    }

    void insertAt(int value, int position) {
        Node* newNode = new Node(value);

        if (position == 0) {
            newNode->next = head;
            head = newNode;
            return;
        }

        Node* current = head;
        for (int i = 0; i < position - 1 && current != nullptr; i++) {
            current = current->next;
        }

        if (current == nullptr) {
            cout << "Invalid position" << endl;
            return;
        }

        newNode->next = current->next;
        current->next = newNode;
    }

    void deleteByValue(int value) {
        if (head == nullptr) {
            cout << "List is empty" << endl;
            return;
        }

        if (head->data == value) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }

        Node* current = head;
        while (current->next != nullptr && current->next->data != value) {
            current = current->next;
        }

        if (current->next == nullptr) {
            cout << "Value not found" << endl;
            return;
        }

        Node* temp = current->next;
        current->next = temp->next;
        delete temp;
    }

    void print() {
        Node* current = head;
        while (current != nullptr) {
            cout << current->data << " ? ";
            current = current->next;
        }
        cout << "NULL" << endl;
    }
};


