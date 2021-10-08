// Microsoft Interview Question
/*
 Problem statement: Given the root of a binary tree. Check whether it is a BST or not.
 
 e.g-
    Input: root = [2,1,3]
    Output: true
    
*/

// cpp code , Time Complexity: O(n) 

#include <bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node* left, *right;
};

bool isBST(Node* root, Node* l=NULL, Node* r=NULL)
{
	// Base condition
	if (root == NULL)
		return true;

	if (l != NULL and root->data <= l->data)
		return false;

	if (r != NULL and root->data >= r->data)
		return false;

	return isBST(root->left, l, root) and
		isBST(root->right, root, r);
}


struct Node* newNode(int data)
{
	struct Node* node = new Node;
	node->data = data;
	node->left = node->right = NULL;
	return (node);
}

/* Driver program to test above functions*/
int main()
{
	struct Node *root = newNode(5);
	root->left	 = newNode(7);
	root->right	 = newNode(6);
	root->left->left = newNode(1);
	root->left->right = newNode(4);

	if (isBST(root,NULL,NULL))
		cout << "Is BST";
	else
		cout << "Not a BST";

	return 0;
}


// Output : Not a BST
