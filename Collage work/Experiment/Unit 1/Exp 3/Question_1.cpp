#include<iostream>

using namespace std;

struct node
{
    int data;
    node *next;
};

void addData(node** top,int d) {
    node* newData = new node();
    newData->data = d;
    newData->next = NULL;

    if(*top == NULL) {
        *top = newData;
    }
    else {
        node* temp = *top;
        while(temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newData;
    }
}
 
void multiNumbInList(node* top,int m) {
    if(top == NULL) {
        cout << "Empty linked list" << endl;
        return;
    }
    while(top != NULL) {
        top->data = top->data * m;
        top = top->next;
    }
}

void displayList(node* top) {
    if(top == NULL) {
        cout << "Empty linked list" << endl;
    } else  {
        cout << "Data in the linked list are : ";
        while(top != NULL) {
            cout << "   " << top->data;
            top = top->next;
        }
    }
}

 
int main()
{

    node* HEAD = NULL;

    int s,d,numb;
    cout << "Enter the size : ";
    cin >> s;
    
    cout << "Enter the data for the linked list : " << endl;
    
    for(int i = 1; i <= s; i++) {
        cin >> d;
        addData(&HEAD,d);
    }
    
    numb = 10;
    cout << "The whole list is multiplied with " << numb << endl;
    multiNumbInList(HEAD,numb);

    displayList(HEAD);
 
    return 0;
}