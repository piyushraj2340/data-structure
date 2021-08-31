#include <iostream>

using namespace std;

void bubble_sort(int*, int);

int main()
{

    int n = 10;

    int arry[n] = {2,24,53,1,43,2,89,9,9,10};



    bubble_sort(arry,n);

    for(int i = 0; i < n; i++)
    {
        cout << arry[i] << endl;
    }

    return 0;
}

void bubble_sort(int arr[], int n)
{
    int temp;
    /*for(int i = 0; i < n ; i++)
    {
        for(int j = i; j < n;  j++)
        {
            if(arr[i] > arr[j])
            {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }*/

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; i < n - 1 - i; j++)
        {
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
#include <iostream>

using namespace std;

void bubble_sort(int*, int);

int main()
{

    int n = 10;

    int arry[n] = {2,24,53,1,43,2,89,9,9,10};



    bubble_sort(arry,n);

    for(int i = 0; i < n; i++)
    {
        cout << arry[i] << endl;
    }

    return 0;
}

void bubble_sort(int arr[], int n)
{
    int temp;


    // for(int i = 0; i < n ; i++)
    // {
    //     for(int j = i; j < n;  j++)
    //     {
    //         if(arr[i] > arr[j])
    //         {
    //             temp = arr[j];
    //             arr[j] = arr[i];
    //             arr[i] = temp;
    //         }
    //     }
    // }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n - 1 - i; j++)
        {
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}




