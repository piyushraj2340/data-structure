#include<iostream>
using namespace std;

int pivot(int a[], int s, int e) {
    int p = s;
    int pivot = a[s];
    int temp;
    while(s <= e) {
        while(a[s] <= pivot) {
            s = s + 1;
        }
        while(a[e] > pivot) {
            e = e - 1;
        }
        if(s < e) {
            temp = a[s];
            a[s] = a[e];
            a[e] = temp;
        }
    }
    temp = a[e];
    a[e] = a[p];
    a[p] = temp;
    return e;
}

void quick_sort(int a[], int s, int e) {
    int p;
    if(s <= e) {
        p = pivot(a,s,e);
        quick_sort(a,s,p - 1); 
        quick_sort(a,p+1,e); 
    }
}

int main()
{
    const int size = 10;

    int arr[size] = {34,151,53,5,85,8,956,4,22,64};  // average case
    // int arr[size] = {100,90,80,70,60,50,40,30,20,10}; // worst case
    // int arr[size] = {10,20,30,40,50,60,70,80,90,100};  // best case

    // for large data


    quick_sort(arr,0,size-1);



    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}