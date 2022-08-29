#include<iostream>
using namespace std;

struct node {
    int data;
    node* next;
};

void storeNode(node **head, int data) {
    node *newHead = new node();
    newHead->data = data;
    newHead->next = NULL;
    if(*head == NULL) {
        *head = newHead;
        return;
    }

    node *last = *head;
    while(last->next != NULL) {
        last = last->next;
    }

    last->next = newHead;
}

void deleteAtLast(node* head) {
    if(head == NULL) {
        cout << "no data into the list" << endl;
        return;
    }
    while((head->next)->next != NULL) {
        head = head->next;
    }

    head->next = NULL;
}

void displayNode(node* head) {
    if(head == NULL) {
        cout << "Empty linked list: \n\tthere is no such data to display." << endl;
    } else  {
        cout << "Data in the linked list are : " << endl;
        while(head != NULL) {
            cout << "\t" << head->data << "  ";
            head = head->next;
        }
    }
}

int main()
{
    node* HEAD = NULL;

    int size;
    cout << "Enter the size : ";
    cin >> size;
    
    cout << "Enter the data for the linked list to insert at last : " << endl;
    
    for(int i = 1; i <= size; i++) {
        int data;
        if(i == 1) 
            cout << "\t" << i << "st data : ";
        else if(i == 2)
            cout << "\t" << i << "nd data : ";
        else if(i == 3)
            cout << "\t" << i << "rd data : ";
        else 
            cout << "\t" << i << "th data : ";
        cin >> data;
        
        storeNode(&HEAD,data);
    }

    deleteAtLast(HEAD);

    displayNode(HEAD);
 
    return 0;
}