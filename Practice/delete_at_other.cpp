#include <iostream>
#define MAX_SIZE 50

using namespace std;


int main() {
    int size,posit;

    cout << "Enter the size of array less then 50: ";
    cin >> size;

    int arry[MAX_SIZE];

    cout << "\nEnter the Element to an array: ";
    for(int i = 0; i < size; i++) {
        cout << "\nAt index [" << i << "] : ";
        cin >> arry[i];
    }



    cout << "Enter the index where you want to deletee the element: ";
    cin >> posit;



    for(int i = posit; i < size; i++) {
        arry[i] = arry[i+1];
    }

    size = size - 1;

    cout << "\nThe Element in the array is: ";
    for(int i = 0; i < size; i++) {
        cout << "\nAt index [" << i << "] : " << arry[i] << endl;
    }



    return 0;
}

