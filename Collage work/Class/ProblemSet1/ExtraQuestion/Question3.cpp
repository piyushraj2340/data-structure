#include<iostream>
using namespace std;

struct node {
    int data;
    node* next;

    node(int d) {
        data = d;
        next = NULL;
    }
};

void push(node **head, int data) {
    node *newNode = new node(data);

    if(*head == NULL) {
        *head = newNode;
        return;
    }

    node *last = *head;
    while(last->next != NULL) {
        last = last->next;
    }
    last->next = newNode;
}

void displayNode(node* head) {
    cout << endl <<  "HEAD  -->  ";
    while(head != NULL) {
        cout << head->data << "  -->  ";
        head = head->next;
    }
    cout <<  "  NULL" << endl;
}

node* reverseList(struct node *head) {
    node *cunt = head;
    node *prev = NULL;
    
    while(cunt != NULL) {
        node *temp = cunt->next;
        cunt->next = prev;
        prev = cunt;
        cunt = temp;
    } 
    return prev;
}
 
int main()
{
    node* HEAD = NULL;

    int size;
    cin >> size;

    
    for(int i = 1; i <= size; i++) {
        int data;
        cin >> data;
        push(&HEAD,data);
    }

    displayNode(HEAD);

    node *REVERSE = reverseList(HEAD);

    displayNode(REVERSE);
    return 0;
}