#include<iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

void storeData(node **head, int data) {
    node* newNode = NULL;
    newNode = new node();
    newNode->data = data;
    newNode->next = NULL;

    if(*head == NULL) {
        *head = newNode;
    }
    else {
        node* temp = *head;
        while(temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void printLinkList(node* head) {
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
    
    cout << "Enter the data for the linked list : " << endl;
    
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
        
        storeData(&HEAD,data);
    }
    

    printLinkList(HEAD);
 
    return 0;
}