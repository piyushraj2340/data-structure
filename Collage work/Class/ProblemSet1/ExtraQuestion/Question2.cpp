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

node* pairWiseSwap(node* head) 
    {
        if (head == NULL || head->next == NULL)
        return head;
 
        node *curr = head->next->next;
        node *prev = head;
        head = head->next;
        head->next = prev;
     
        while (curr != NULL && curr->next != NULL)
        {
            prev->next = curr->next;
            prev = curr;
            node *next = curr->next->next;
            curr->next->next = curr;
            curr = next;
        }
         
        prev->next = curr;
     
        return head;
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

    node *REVERSE = pairWiseSwap(HEAD);

    displayNode(REVERSE);
    return 0;
}