#include<iostream>
using namespace std;

	int stack[5];
	int top=-1;
void push(int x)
{
	if(top==n-1)
	{
		cout<<"Stack is full";
	}
	else
	{
		top++;
		stack[top]=x;
	}

}	
void pop()
 {
	
	if(top==-1)
	{
		
		cout<<"Stack is empty";
	}
	else
	{
		cout<<"Removed element from stack is"<<stack[top];
		top--;
		
	}
}
	

void display()
{
	
	if(top>=0)
	{
		cout<<"Stack elements are:"<<endl;
		
		for(int i=top; i>=0 ; i--)
		{
			
			cout<<stack[i]<<endl;
		}
	}
}

int main()
{
    
	
	push(10);
	push(40);	
	push(50);
	push(60);
	push(80);
	display();
	pop();
	display();
	
}
