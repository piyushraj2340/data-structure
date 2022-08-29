#include<iostream>
using namespace std;
 
struct Stack {
    string data;
    Stack *next;

    Stack(string x) {
        data = x;
        next = NULL;
    }
};

Stack *HEAD = NULL;

void push(string x) {
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
    cout << "Inserting name : " << "Piyush" << endl;
    push("Piyush");
    cout << "Inserting name : " << "Raj" << endl;
    push("Raj");
    cout << "Traversing Name : " << endl;
    traverse();
    cout << "Displying the peek item : ";
    peek();
    cout << "Deleting name from stack" << endl;
    pop();
    cout << "Traversing Name : " << endl;
    traverse();
    return 0;
}