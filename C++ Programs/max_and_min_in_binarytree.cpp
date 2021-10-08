#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* left;
    node* right;
    node(int data) {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

int max_value_in_tree(node* root) {
    if(root == NULL) return INT_MIN;
    
    int curr = root->data;
    int left_max = max_value_in_tree(root->left);
    int right_max = max_value_in_tree(root->right);

    curr = max(curr, left_max);
    curr = max(curr, right_max);
    return curr;
}

int min_value_in_tree(node* root) {
    if(root == NULL) return INT_MAX;
    
    int curr = root->data;
    int left_min = min_value_in_tree(root->left);
    int right_min = min_value_in_tree(root->right);

    curr = min(curr, left_min);
    curr = min(curr, right_min);
    return curr;
}

signed main() {
    node* root = new node(10);
    
    root->left = new node(20);
    root->right = new node(30);
    root->left->left = new node(5);
    root->left->right = new node(24);
    root->right->left = new node(12);
    root->right->right = new node(23);
    
    cout << max_value_in_tree(root) << "\n";
    cout << min_value_in_tree(root);
}