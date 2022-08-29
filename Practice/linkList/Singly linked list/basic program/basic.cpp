#include<iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
};

void printLinkedList(Node *head) {
    while(head != NULL) {
        cout << head->data << "  ";
        head = head->next;
    }
}
 
int main()
{
    Node *HEAD = NULL;

    Node *first = new Node(); 
    first->data = 20;

    Node *second = new Node();
    second->data = 50;

    Node *third = new Node();
    third->data = 65;

    first->next = second;
    second->next = third;
    third->next = NULL;

    HEAD = first;

    printLinkedList(HEAD);

    return 0;
}