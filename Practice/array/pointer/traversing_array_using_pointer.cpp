#include<iostream>
using namespace std;

void traversingArrayUsingPointer(int *arr,int size) {
    int s = sizeof(arr[0]);
    int* ptr = 0;

    for(int i = 0; i < size; i++) {
        ptr = ptr + s;
        cout << *ptr << "  ";
    }
}
 
int main()
{
    const int size = 10;
    int arr[size] = {11,12,13,14,15,16,17,18,19,20};

    traversingArrayUsingPointer(arr,size);

    return 0;
}