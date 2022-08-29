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

void swap(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

struct node* parti(struct node* head,struct node* tail) {
    struct node* pvt = head, *curr = head->next, *prev= head;
    while(curr!=tail->next){
        if(pvt->data > curr->data){
            swap(prev->next->data,curr->data);
            prev = prev->next;
        }
        curr = curr->next;
    }
    swap(pvt->data,prev->data);
    return prev;
}

void solve(struct node* head,struct node* tail){
    if(!head || !tail || head==tail) return;
    struct node* pvt = parti(head,tail);
    solve(head,pvt);
    solve(pvt->next,tail);
}

void quickSort(struct node **head) {
    struct node* tail = *head;
    while(tail->next)
        tail = tail->next;
    solve(*head,tail);
}

void displayNode(node* head) {
    cout << endl <<  "HEAD  -->  ";
    while(head != NULL) {
        cout << head->data << "  -->  ";
        head = head->next;
    }
    cout <<  "  NULL" << endl;
}

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

    quickSort(&HEAD);

    displayNode(HEAD);
    return 0;
}