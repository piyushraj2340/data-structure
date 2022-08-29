#include<iostream>
using namespace std;

struct node {
    int data;
    node* next;
};

void insertAtStart(node **head, int data) {
    node *newNode = new node();
    newNode->data = data;
    if(*head == NULL) {
        newNode->next = NULL;
        *head = newNode;
        return;
    }

    newNode->next = *head;

    *head = newNode;

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
        
        insertAtStart(&HEAD,data);
    }

    displayNode(HEAD);
 
    return 0;
}