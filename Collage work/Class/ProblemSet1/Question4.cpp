
/* Link list Node */
struct Node
{
    int data;
    struct Node *next;
    
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

Node* sortedMerge(struct Node* a, struct Node* b);

void printList(struct Node *n)
{
    while (n!=NULL)
    {
        cout << n->data << " ";
        n = n->next;
    }
    cout << endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;

        int data;
        cin>>data;
        struct Node *head1 = new Node(data);
        struct Node *tail1 = head1;
        for (int i = 1; i < n; ++i)
        {
            cin>>data;
            tail1->next = new Node(data);
            tail1 = tail1->next;
        }

        cin>>data;
        struct Node *head2 = new Node(data);
        struct Node *tail2 = head2;
        for(int i=1; i<m; i++)
        {
            cin>>data;
            tail2->next = new Node(data);
            tail2 = tail2->next;
        }

        Node *head = sortedMerge(head1, head2);
        printList(head);
    }
    return 0;
}


Node* sortedMerge(Node* head1, Node* head2)  
{  
    Node *head3 = NULL;
    Node *end = NULL;
    
    while(head1 != NULL && head2 != NULL) {
        if(head1->data <= head2->data) {
            Node *temp = new Node(head1->data);
            
            if(head3 == NULL) {
                head3 = temp;
                end = head3;
            } else {
               end->next = temp;
               end = end->next;
            }
            head1 = head1->next;
        } else {
            Node *temp = new Node(head2->data);
            
            if(head3 == NULL) {
                head3 = temp;
                end = head3;
            } else {
               end->next = temp;
               end = end->next;
            }
            head2 = head2->next;
        }
    }
    
    if(head1 == NULL) {
        while(head2 != NULL) {
            Node *temp = new Node(head2->data);
            
        if(head3 == NULL) {
            head3 = temp;
            end = head3;
        } else {
           end->next = temp;
           end = end->next;
        }
        head2 = head2->next;   
        }
    } else {
        while(head1 != NULL) {
            Node *temp = new Node(head1->data);
            
            if(head3 == NULL) {
                head3 = temp;
                end = head3;
            } else {
               end->next = temp;
               end = end->next;
            }
            head1 = head1->next;
        }
    }
    return head3;
}  