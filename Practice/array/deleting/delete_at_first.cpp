
#include <iostream>
#define MAX_SIZE 50

using namespace std;


int main() {
    int size, input;

    cout << "Enter the size of array less then 50: ";
    cin >> size;

    int arry[MAX_SIZE];

    cout << "\nEnter the Element to an array: ";
    for(int i = 0; i < size; i++) {
        cout << "\nAt index [" << i << "] : ";
        cin >> arry[i];
    }



    for(int i = 0; i < size; i++) {
        arry[i] = arry[i+1];
    }

    size = size - 1;

    cout << "\nThe Element in the array is: ";
    for(int i = 0; i < size; i++) {
        cout << "\nAt index [" << i << "] : " << arry[i] << endl;
    }



    return 0;
}

