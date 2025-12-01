#include<iostream>
using namespace std;

class Queue {
public:
    int front = 0;
    int rear = -1;
    int queue[5];
    int n = 5;  // maximum size of queue

    void enque(int x) 
    {
        if (rear == n - 1) {   // queue full
            cout << "Queue is full" << endl;
            return;
        }
        rear++;
        queue[rear] = x;
        cout << x << " inserted into queue" << endl;
    }

    void deque() 
    {
        if (front > rear) {  // queue empty
            cout << "Queue is empty" << endl;
            return;
        }
        cout << "Removed element is: " << queue[front] << endl;
        front++;
    }

    void display() 
    {
        if (front > rear) {
            cout << "Queue is empty" << endl;
            return;
        }

        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++) {
            cout << queue[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    Queue s1;
    s1.enque(5);
    s1.display();
    s1.enque(10);
    s1.display();

    return 0;
}

