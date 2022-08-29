
// best insertion sorting 
#include <iostream>
using namespace std;

void inertion_sorting(int arr[], int size)
{
    int key;
    for(int i = 0; i < size; i++) {
        key = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main()
{

    const int size = 10;

    int arr[size] = {34,151,53,5,85,8,956,4,22,64};  // average case
    // int arr[size] = {100,90,80,70,60,50,40,30,20,10}; // worst case
    // int arr[size] = {10,20,30,40,50,60,70,80,90,100};  // best case

    
    inertion_sorting(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}