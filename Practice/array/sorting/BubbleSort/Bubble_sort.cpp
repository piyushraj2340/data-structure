#include <iostream>

using namespace std;

void bubble_sort(int*, int);

int main()
{

    // const int n = 10;

    // int arry[n] = {2,24,53,1,43,2,89,9,9,10}; //average case
    // int arry[n] = {1,2,3,4,50,6,7,8,9,10};  // some othe case
    // int arry[n] = {1,2,3,4,5,6,7,8,9,10}; // best case
    // int arry[n] = {100,90,80,70,60,50,40,30,20,10}; // worst case 

    // for very large data 

    int n = 10000;

    bubble_sort(arry,n);

    for(int i = 0; i < n; i++)
    {
        cout << arry[i] << "   ";
    }

    return 0;
}

void bubble_sort(int arr[], int n)
{
    int temp, flag;

    for(int i = 0; i < n - 1; i++)
    {
        flag = 0; 
        for(int j = 0; j < n - 1 - i; j++)
        {
            if(arr[j] > arr[j+1])
            {
                flag = flag + 1;
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        if(flag == 0) {
            // cout << "round " << i << "";
            break;
        }
    }
}




