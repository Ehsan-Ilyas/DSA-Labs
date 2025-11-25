#include<iostream>
using namespace std;

struct Node
{
	int data;
	Node *next;
//	Node *head=NULL;
	
};
Node *Top=NULL;


void Push(int n)
{
	

    Node *newNode= new Node;
    newNode-> data=n;
    newNode->next=Top;
    Top=newNode;
    cout<<"The pushed element in stack "<<n<<endl;
	
}

void pop()
{
	if(Top==NULL)
	{
		
		cout<<"Stack is empty"<<endl;
		return ;
	}
	else
	{
		Node *temp= Top;
		
		cout<<"The popped element is:"<<Top->data<<endl;
		Top=Top->next;
		delete temp;
		
	}
	
	
}

int peek()
{
	
	if(Top==NULL)
	{
		
		cout<<"Stack is empty"<<endl;
		
	}
	cout<<"The top element is:"<<endl;
	cout<<Top->data<<endl;
	
}
void print()
{
	Node *temp=Top;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}

int main()
{
	Push(1);
	Push(5);
	Push(6);
	Push(10);
	print();
	pop();
	print();
	peek();
	
}
