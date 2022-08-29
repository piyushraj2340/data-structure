#include<iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

void storeData(node** head,int data) {
    node* newNode = new node();
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

int countOccurrences(node* head, int find) {
    int count = 0;
    if(head == NULL) {
        return -1;
    }
    else {
        while(head != NULL) {
            if(head->data == find) 
                count = count + 1;
            head = head->next;
        }
        return count;
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

    int search;
    cout << "Enter the number to check the total number of occurrence : ";
    cin >> search;

    cout << "The " << search << " found at most occurrence is : " << countOccurrences(HEAD,search);
    return 0;
}