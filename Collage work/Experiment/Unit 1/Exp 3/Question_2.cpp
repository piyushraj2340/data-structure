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

int findOccurrInList(node* top, int occ) {
    int countOcc = 0;
    if(top == NULL) {
        cout << "List is empty" << endl;

        return -1;
    }
    else {
        while(top != NULL) {
            if(top->data == occ) {
                ++countOcc;
            }
            top = top->next;
        }
        return countOcc;
    }
}

 
int main()
{
    node* HEAD = NULL;

    int n,s,d;
    cout << "Enter the size : ";
    cin >> n;
    
    cout << "Enter the data for the linked list : " << endl;
    
    for(int i = 1; i <= n; i++) {
        cin >> d;
        addData(&HEAD,d);
    }

    cout << "Enter the number to check the total number of occurrence : ";
    cin >> s;

    cout << "The number " << s << " found at most occurrence is : " << findOccurrInList(HEAD,s);
    return 0;
}