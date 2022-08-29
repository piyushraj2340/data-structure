#include<iostream>

#define MAX_SIZE 50
using namespace std;

void frequency(int arr[], int &size) {
    for(int i = 0; i < size - 1; i++) {
        int count = 1;
        for(int j = i + 1; j < size; j++) {
            if(arr[i] == arr[j]) {
                count++;
                for(int k = j; k < size; k++) {
                    arr[k] = arr[k + 1];
                }
                arr[size - 1] = 0;
                size--;
                j--;
            }
        }
        cout << "Element with key " << arr[i] << " with frequency : " << count << endl;
    }
} 
 
int main() {
    cout << "NAME : TARUN GARG"<< endl; 
    cout << "UID : 20BCS2421" << endl << endl;
    int arry[MAX_SIZE];
    int size;
    cout << "Enter the number of size for an array : ";
    cin >> size;

    cout << "Enter the element for an array : " << endl;
    for (int i = 0; i < size; i++) {
        cout << "For index : [" << i  << "] : ";
        cin >> arry[i];
    }

    frequency(arry,size);

    cout << endl << "Final array is : " << endl;
    for(int i = 0; i < size; i++) {
        cout << "For index : [" << i  << "] : " << arry[i] << endl;
    }
    return 0;
}