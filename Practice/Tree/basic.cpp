#include<iostream>
using namespace std;

struct node
{
    int data;
    node *leftChild;
    node *rightChild;
};

node *root = NULL;

void inOrder(node *root) {
    if(root != NULL) {
        inOrder(root->leftChild);
        cout << root->data <<  "  ";
        inOrder(root->rightChild);
    }
}

void insert(int data) {
    node *tempNode = new node();
    node *current;
    node *parent;

    tempNode->data = data;
    tempNode->leftChild = NULL;
    tempNode->rightChild = NULL;


    if(root == NULL) {
        root = tempNode;
    } else {
        current = root;
        parent = NULL;

        while(1) {
            parent = current;
            if(data<parent->data) {
                current = current->leftChild;
                if(current == NULL) {
                    parent->leftChild = tempNode;
                    return;
                }
            } else {
                current = current->rightChild;

                if(current == NULL) {
                    parent->rightChild = tempNode;
                    return;
                }
            }
        }
    }
}

// node* deleteNode(node *root, int key) {
//     if(root == NULL)
//         return root;
//     if(key<root->data)
//         root->leftChild = deleteNode(root->leftChild, key); 
//     else if(key > root->rightChild)
//         root->rightChild = deleteNode(root->rightChild, key);
//     else {
//         if(root->left == NULL) {
//             node *temp = root->rightChild;
//             return temp;
//         } else if (root->rightChild == NULL) {
//             node *temp = root->leftChild;
//             return temp;
//         }

//         node *temp 
//     }

    
// }

int main()
{
    insert(1053);
    insert(104);
    insert(10345);
    insert(103);
    insert(160);

    inOrder(root);
 
    return 0;
}