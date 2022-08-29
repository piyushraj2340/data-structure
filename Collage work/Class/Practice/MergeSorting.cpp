#include<iostream>
#define MAX_SIZE 50
using namespace std;
 

void merge(int arr[],int l, int u) {
    int size = u - l + 1;
    int aux[size];
    int m = (l + u) / 2;
    int i = l, j = m + 1, k = 0;
    
        
    while(i <= m && j <= u) {
        if(arr[i] <= arr[j]) {
            aux[k] = arr[i];
            i++;
        }
        else {
            aux[k] = arr[j];
            j++;
        }
        k++;
    }

    if(i <= m) {
        while(i <= m) {
            aux[k] = arr[i];
            i++;
            k++;
        }
    }
    else {
        while(j <= u) {
            aux[k] = arr[j];
            j++;
            k++;
        }
    }

    for(int i = l, k = 0; i <= u ; i++, k++) {
        arr[i] = aux[k]; 
    } 
}

void mergeSort(int arr[],int l, int u) {
    int m = (l + u) / 2;
    if(l < u) {
        mergeSort(arr,l,m);
        mergeSort(arr,m + 1, u);
        merge(arr,l,u);
    }
}

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

    mergeSort(arr,0,size - 1);

    cout << "Element in array are : " << endl;
    for(int i = 0; i < size; i++) {
        cout << "For index : [" << i << "] :" << arr[i] << endl;
    }


    return 0;
}