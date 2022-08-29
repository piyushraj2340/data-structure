#include <iostream>

using namespace std;

void insertElem(int *, int, int);
void InsertionSort(int *, int);

 


int main() {

    const int size = 10;

    int arr[size] = {34,151,53,5,85,8,956,4,22,64};  // average case
    // int arr[size] = {100,90,80,70,60,50,40,30,20,10}; // worst case
    // int arr[size] = {10,20,30,40,50,60,70,80,90,100};  // best case


    // for very large data sorting
   
    // insertElem(arr, 4, 1);

    InsertionSort(arr,size);

    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }


    return 0;
}

void insertElem(int arr[], int n,int index) {
    int temp = arr[n];
    int j;
    for(j = n; j > index; j--) {
        arr[j] = arr[j - 1];
    }
    arr[index] = temp;
}

void InsertionSort(int arr[], int n) {
    for(int i = 1; i < n; i++) {
        if(arr[i] < arr[i - 1]) {
            for(int j = i - 1; j >= 0; j--) {
                if(arr[i] > arr[j]) {
                    insertElem(arr,i,j+1);
                    break;
                }
                if(j == 0) {
                    insertElem(arr,i,0);
                }
            }
        }
    }
}