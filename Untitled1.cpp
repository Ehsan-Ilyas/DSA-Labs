#include<iostream>
using namespace std;

struct Node{
	int data;
	Node* next;
	
	
	
};

Node* head=NULL;

void insert(int n)
{
	Node *newNode=new Node;
	newNode->data=n;
	newNode->next=head;
	newNode=head;
	
	
}
void print()
{
	
	
	Node *temp=head;
	while(temp!=NULL)
	{
	
	cout<<"The values in linkedlist are:"<<temp-next<<endl;
	temep=temp->next;
}
}
