#include <iostream>
using namespace std;


int binary_search(int *, int, int);


int main()
{
    int size = 10;
    int search_elem;

    int arry[size] = {5,7,9,11,15,20,30,45,89,97};



    cout << "Enter the number you want to search: ";
    cin >> search_elem;

    binary_search(arry, size, search_elem);


}

int binary_search(int arry[], int size, int search)
{
    int upper, lower, mid;

    lower = 0;
    upper = size - 1;
    mid = (lower + upper) / 2;


    while(lower != upper)
    {
        if(arry[mid] == search)
        {
            cout << "Element " << search << " is at index : [" << mid  << "]" << endl;
            return mid;
        }
        else
        {
            if(arry[mid] < search)
            {
                lower = mid + 1;
                mid = (lower + upper) / 2;
            }
            else
            {
                upper = mid - 1;
                mid = (lower + upper) / 2;
            }
        }

        if(lower == upper)
        {
            if(arry[lower] != search)
            {
                cout << "Search element not found" << endl;
                return - 1;
            }
            else
            {
                cout << "Element " << search << " is at index : [" << mid  << "]" << endl;
                return lower;
            }
        }
    }

}
