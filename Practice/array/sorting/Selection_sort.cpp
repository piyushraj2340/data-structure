#include <iostream>

using namespace std;


void SelectionSort(int *, int);


int main()
{
    const int size = 10;
    int arr[size] = {34,151,53,5,85,8,956,4,22,64}; 
    // int arr[size] = {100,90,80,70,60,50,40,30,20,10};
    // int arr[size] = {10,20,30,40,50,60,70,80,90,100};


    SelectionSort(arr,size);

    for(int i = 0; i < size; i++) {
        cout << arr[i] << endl;
    }

    return 0;
}



void SelectionSort(int arr[], int n) {
    int temp;
    for (int i = 0; i < n - 1; i++) {
        for(int j = 0 + i; j < n; j++) {
            if(arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}