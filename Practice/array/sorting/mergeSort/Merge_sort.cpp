#include<iostream>
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
    int size = 10;

    int arr[size] = {34,151,53,5,85,8,956,4,22,64};  // average case
    // int arr[size] = {100,90,80,70,60,50,40,30,20,10}; // worst case
    // int arr[size] = {10,20,30,40,50,60,70,80,90,100};  // best case
    

    mergeSort(arr,0,size - 1);

    for(int i = 0; i < size; i++) {
        cout << " " << arr[i];
    }

    return 0;
}