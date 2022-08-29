#include<iostream>
#define MAX_SIZE 50

using namespace std;

/**
 *   task is to merge the array one after another 
 * 
 *   note that : size should not be increase dynamicly 
 * 
*/
 
int main()
{
    int arr1[MAX_SIZE];
    int arr2[MAX_SIZE];

    int s1,s2;

    cout << "Enter the size of 1st array: ";
    cin >> s1;

    cout << "Enter the Element to the 1st array: " << endl;
    for(int i = 0; i < s1; i++) {
        cout << "\tat index: [" << i << "] : ";
        cin >> arr1[i];
    }


    cout << "Enter the size of 2nd array: ";
    cin >> s2;

    cout << "Enter the Element to the 2nd array: " << endl;
    for(int i = 0; i < s2; i++) {
        cout << "\tat index: [" << i << "] : ";
        cin >> arr2[i];
    }

    cout << "merging the 2nd array into the 1st array: " << endl;

    s1 = s1 + s2;

    for(int i = s1 - s2,j = 0; i < s1; i++,j++) {
        arr1[i] = arr2[j];
    }

    cout << "traversing array: " << endl;
     
 
    for(int i = 0; i < s1; i++) {
        cout << "\tat index: [" << i << "] : " << arr1[i] << endl;
    }
    return 0;
}