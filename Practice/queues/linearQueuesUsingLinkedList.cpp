#include<iostream>
using namespace std;
 
struct Queues {
    int data;
    Queues *next;
};

Queues *HEAD = NULL;

void enqueue(int x) {
    Queues *newQueues = new Queues();
    newQueues->data = x;
    newQueues->next = NULL;

    if(HEAD == NULL) {
        HEAD = newQueues;
    } else {
        Queues *temp = HEAD;
        while(temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newQueues;
    }

    cout << "Inserting data into queue : " << x << endl;
}

void dequeue() {
    if(HEAD == NULL) {
        cout << "underflow" << endl;
    } else {
        Queues *temp = HEAD;
        temp = temp->next; 
        HEAD = temp;
    }
    cout << "deleting element from queue." << endl;
}

void peek() {
    cout << "Displaying the peek element : ";
    if(HEAD == NULL) {
        cout << "underflow" << endl;
        return;
    } else {
        cout << " " << HEAD->data << endl;
    }
}

void traverse() {
    cout << "Traversing the queue : ";
    Queues *temp = HEAD;
    while(temp != NULL) {
        cout << " " << temp->data;
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    enqueue(20);
    enqueue(25);
    traverse();
    peek();
    dequeue();
    traverse();
    return 0;
}