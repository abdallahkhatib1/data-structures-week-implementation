#include <iostream>
#include <list>
#include <vector>
using namespace std;

class HashTable {
private:
    static const int SIZE = 10; 
    vector<list<pair<int, string>>> table;

    int hashFunction(int key) {
        return key % SIZE;
    }

public:
    HashTable() {
        table.resize(SIZE);
    }

    void put(int key, string value) {
        int index = hashFunction(key);
        for (auto& pair : table[index]) {
            if (pair.first == key) {
                pair.second = value; 
                return;
            }
        }
        table[index].push_back({ key, value }); 
    }

    string get(int key) {
        int index = hashFunction(key);
        for (auto& pair : table[index]) {
            if (pair.first == key) {
                return pair.second;
            }
        }
        return "Not found";
    }

    void remove(int key) {
        int index = hashFunction(key);
        auto& cell = table[index];
        for (auto it = cell.begin(); it != cell.end(); ++it) {
            if (it->first == key) {
                cell.erase(it);
                return;
            }
        }
    }

    void display() {
        for (int i = 0; i < SIZE; ++i) {
            cout << i << ": ";
            for (auto& pair : table[i]) {
                cout << "[" << pair.first << " -> " << pair.second << "] ";
            }
            cout << endl;
        }
    }
};
