#include<iostream>
using namespace std;

int n = 10;
int q[10];
int front = -1; 
int rear = -1;

void enqueue(int x) {
    if(front ==  -1 && rear == -1) {
        front = 0;
        rear = 0;
        q[rear] = x;
    } else if (rear >= n - 1) {
        cout << "Overflow" << endl;
    } else {
        rear++;
        q[rear] = x;
    }
}

void dequeue() {
    if(front == -1 && rear == -1) {
        cout << "underflow" << endl;
    } else {
        front++;
    }
}

void traverse() {
    for(int i = front; i <= rear; i++) {
        cout << " " << q[i];
    }
    cout << endl;
}

int peek() {
    return q[front];
}
 
int main()
{
    cout << " Inserting items : " << 10 << endl; 
    enqueue(10);
    cout << " Inserting items : " << 15 << endl;
    enqueue(15);
    cout << " Traverse Queue : " << endl;
    traverse();
    cout << " Displying peek items : " << peek() << endl;
    cout << " deleting items in Queue : " << endl; 
    dequeue();
    cout << " Traverse Queue : " << endl;
    traverse();
    return 0;
}