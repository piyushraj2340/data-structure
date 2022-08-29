#include<iostream>
using namespace std;
 
struct Stack {
    int data;
    Stack *next;

    Stack(int x) {
        data = x;
        next = NULL;
    }
};

Stack *HEAD = NULL;

void push(int x) {
    Stack *newStack = new Stack(x);

    if(HEAD == NULL) {
        HEAD = newStack;
    } else {
        Stack *temp = HEAD;
        newStack->next = HEAD;
        HEAD = newStack;
    }
}

void pop() {
    if(HEAD == NULL) {
        cout << "underflow" << endl;
    } else {
        Stack *temp = HEAD;
        temp = temp->next; 
        HEAD = temp;
    }
}

void peek() {
    if(HEAD == NULL) {
        cout << "underflow" << endl;
        return;
    } else {
        cout << " " << HEAD->data << endl;
    }
}

void traverse() {
    Stack *temp = HEAD;
    while(temp != NULL) {
        cout << " " << temp->data;
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    push(10);
    push(15);
    traverse();
    peek();
    pop();
    traverse();
    return 0;
}