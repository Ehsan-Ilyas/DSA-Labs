#include<iostream>
using namespace std;

struct Node
{
	int data;
	Node *next;
	Node *head=NULL;
	
};
Node *head=NULL;


void insert(int n)
{
	

    Node *newNode= new Node;
    newNode-> data=n;
    newNode->next=head;
    head=newNode;
	
}

void print()
{
	Node *temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
	
		temp=temp->next;
	}
}

int main()
{
	insert(1);
	insert(5);
	insert(6);
	print();
}
