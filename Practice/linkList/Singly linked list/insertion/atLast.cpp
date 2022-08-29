#include<iostream>
using namespace std;

struct node {
    int data;
    node* next;
};

void insertAtLast(node **head, int data) {
    node *newNode = new node();
    newNode->data = data;
    newNode->next = NULL;
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
        
        insertAtLast(&HEAD,data);
    }

    displayNode(HEAD);
    return 0;
}