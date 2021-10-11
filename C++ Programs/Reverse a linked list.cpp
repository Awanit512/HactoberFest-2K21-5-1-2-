// Microsoft,Amazon Interview Question

/*

 Problem statement: Reverse a Linked List.

 Example-> Input Linked List: 20 34 11 54 89
           Output Linked List: 89 54 11 34 20

*/

//Time Complexity: O(n)
//Space Complexity: O(1)

#include <iostream>

using namespace std;

class Node
{
    public:
         int data;
         Node *next;
}*first=NULL;

void Display(Node *p)
{
     while(p!=NULL)
     {
         cout<<p->data<<" ";
         p=p->next;
     }
     cout<<endl<<endl;
}
void create(int A[],int n)
{
     int i;
     Node *t,*last;
     first=new Node[sizeof(Node)];
     first->data=A[0];
     first->next=NULL;
     last=first;

     for(i=1;i<n;i++)
     {
         t=new Node[sizeof(Node)];
         t->data=A[i];
         t->next=NULL;
         last->next=t;
         last=t;
     }
}
void Reverse2(Node *p)
{
     Node *q=NULL,*r=NULL;

     while(p!=NULL)
     {
         r=q;
         q=p;
         p=p->next;
         q->next=r;
     }
     first=q;
}
int main()
{

     int *p;
     int n;
     cout<<"Enter the no. of elements from which you want to create the linked list: ";
     cin>>n;
     cout<<endl<<"Enter the elements for the linked list: ";
     p=new int[n];
     for(int i=0;i<n;i++)
     {
         cin>>p[i];
     }
     create(p,n);
     cout<<endl<<endl;
     cout<<"Linked List: ";
     Display(first);
     Reverse2(first);
     cout<<"Reversed Linked List: ";
     Display(first);

     return 0;
}
