#include<iostream>
#define MAX_SIZE 50
using namespace std;
 
int main()
{
    int arr[MAX_SIZE];

    int size;
    cout << "Enter the size of array : ";
    cin >> size;

    cout << "Enter the element of the array : " << endl;
    for(int i = 0; i < size; i++) {
        cout << "For index : [" << i << "] :";
        cin >> arr[i]; 
        cout << endl;
    }

    for(int i = 0; i < size - 1; i++) {
        for(int j = i + 1; j < size; j++) {
            if(arr[i] >= arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    cout << "Element in array are : " << endl;
    for(int i = 0; i < size; i++) {
        cout << "For index : [" << i << "] :" << arr[i] << endl;
    }
    
    return 0; 
}