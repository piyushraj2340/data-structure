#include<iostream>
using namespace std;

int pivot(int a[], int s, int e) {
    int p = s;
    int pivot = a[s];
    int temp;
    while(s <= e) {
        while(a[s] >= pivot) {
            s = s + 1;
        }
        while(a[e] < pivot) {
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
        int p = pivot(a,s,e);
        quick_sort(a,s,p - 1); 
        quick_sort(a,p+1,e); 
    }
}

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter the data into the array: " << endl;

    for(int i = 0; i < n; i++) {
        cout << "at index: ["  << i << "] : ";
        cin >> arr[i]; 
    }

    quick_sort(arr,0,n-1);
    
    cout << endl << endl << "The sorted array is: ";

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}