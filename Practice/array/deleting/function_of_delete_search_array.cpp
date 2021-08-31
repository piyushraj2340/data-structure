#include <iostream>
#define MAX_SIZE 50

using namespace std;

int size;

void deleteArryElem(int*,int);

int main() {

    int arry[MAX_SIZE];
    int deleteNumb;

    cout << "Enter the size of array: ";
    cin >> size;

    cout << "Enter the data into the elements: " << endl;
    for(int i = 0; i < size; i++) {
        cout << "at index: [" << i << "] : ";
        cin >> arry[i];
    }

    cout << "Enter the number you want to delete into the array: ";
    cin >> deleteNumb;

    deleteArryElem(arry,deleteNumb);

    cout << "The data into the array is: " << endl;
    for(int i = 0; i < size; i++) {
        cout << "at index: [" << i << "] : " << arry[i] << endl;
    }

    return 0;
}


void deleteArryElem(int *arry,int numb) {
    for(int i = 0; i < size; i++) {
        if(arry[i] == numb) {
            for(int j = i; j < size; j++) {
                arry[i] = arry[i + 1];
            }
            size = size - 1;
            arry[size] = 0;
            break;
        }
        if(i == size - 1) {
            cout << "The Number you finding is not present" << endl;
        }
    }

}

