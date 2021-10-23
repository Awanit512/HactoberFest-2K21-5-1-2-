// Mostly asked interview question in amazon
// cpp code for Reversing a Linked List in groups of given size(k)
/*
  Problem Statemenr: Given a linked list, write a function to reverse every k nodes. 

   Example:   
            Input: 1->2->8->4->10->6->7->3->NULL, K = 3 
            Output: 8->2->1->6->10->4->3->7->NULL 
            
   Method: Time Complexity: O(n) , Space Complexity: O(n/k). 
  
  Algorithm:
           1- Reverse the first sub-list of size k. While reversing keep track of the next node and previous node. 
              Let the pointer to the next node be next and pointer to the previous node be prev.
           2- head->next = reverse(next, k) ( Recursively call for rest of the list and link the two sub-lists )
           3- Return prev
*/

// code

#include <bits/stdc++.h>
using namespace std;

class Node {
public:
	int data;
	Node* next;
};

Node* reverse(Node* head, int k)
{
	// base case
	if (!head)
		return NULL;
	Node* current = head;
	Node* next = NULL;
	Node* prev = NULL;
	int count = 0;

	while (current != NULL && count < k) {
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
		count++;
	}

	if (next != NULL)
		head->next = reverse(next, k);

	return prev;
}

void push(Node** head_ref, int new_data)
{

	Node* new_node = new Node();
	new_node->data = new_data;
	new_node->next = (*head_ref);
	(*head_ref) = new_node;
}

void printList(Node* node)
{
	while (node != NULL) {
		cout << node->data << " ";
		node = node->next;
	}
}

// Driver code
int main()
{
	Node* head = NULL;

	push(&head, 10);
	push(&head, 8);
	push(&head, 7);
	push(&head, 9);
	push(&head, 5);
	push(&head, 4);
	push(&head, 6);
	push(&head, 2);
	push(&head, 1);

	cout << "Given linked list \n";
	printList(head);
	head = reverse(head, 3);

	cout << "\nReversed Linked list \n";
	printList(head);

	return 0;
}

