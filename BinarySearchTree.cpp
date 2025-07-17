#include <iostream>
using namespace std;

struct BSTNode {
    int data;
    BSTNode* left;
    BSTNode* right;

    BSTNode(int value) {
        data = value;
        left = right = nullptr;
    }
};

BSTNode* insert(BSTNode* root, int value) {
    if (root == nullptr) return new BSTNode(value);

    if (value < root->data)
        root->left = insert(root->left, value);
    else
        root->right = insert(root->right, value);

    return root;
}

void inorder(BSTNode* root) {
    if (root == nullptr) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
