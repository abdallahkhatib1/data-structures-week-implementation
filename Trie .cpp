#include <iostream>
using namespace std;

const int ALPHABET_SIZE = 26;

struct TrieNode {
    TrieNode* children[ALPHABET_SIZE];
    bool isEndOfWord;

    TrieNode() {
        isEndOfWord = false;
        for (int i = 0; i < ALPHABET_SIZE; i++)
            children[i] = nullptr;
    }
};

class Trie {
private:
    TrieNode* root;

public:
    Trie() {
        root = new TrieNode();
    }

    void insert(string word) {
        TrieNode* currentNode = root;
        for (char character : word) {
            int index = character - 'a';
            if (currentNode->children[index] == nullptr)
                currentNode->children[index] = new TrieNode();
            currentNode = currentNode->children[index];
        }
        currentNode->isEndOfWord = true;
    }

    bool search(string word) {
        TrieNode* currentNode = root;
        for (char character : word) {
            int index = character - 'a';
            if (currentNode->children[index] == nullptr)
                return false;
            currentNode = currentNode->children[index];
        }
        return currentNode->isEndOfWord;
    }

    bool startsWith(string prefix) {
        TrieNode* currentNode = root;
        for (char character : prefix) {
            int index = character - 'a';
            if (currentNode->children[index] == nullptr)
                return false;
            currentNode = currentNode->children[index];
        }
        return true;
    }
};

