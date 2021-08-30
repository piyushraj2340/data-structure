#include <iostream>
#define MAX_SIZE 5
using namespace std;

void inputArry();


int insertIntoArry() {
    return 0;
}


int main() {

    int size;

    int posit;
    int myArray[MAX_SIZE];


    cout << "Enter the max number of an element you want to store in an array : " << endl;
    cout << "Please note that the size of an array must be less the " << MAX_SIZE <<  " : ";
    sizeLabel:
    cin >> size;

    if(size >= MAX_SIZE) {
        cout << "\nError!.... \nThe size of an array is greater than " << MAX_SIZE << "\n" << "\nEnter the number less than " << MAX_SIZE << " : ";

        goto sizeLabel;
    } else {
        cout << "Enter element for an array: " << endl;
        for(int i = 0; i < size; i++) {
            cout << "at index  [" << i << "] : ";
            cin >> myArray[i];
        }

        cout << "\n\nChoose the position where you want to insert the data: ";
        cout << "\n\t 1. At Start" << endl;
        cout << "\t 2. At last" << endl;
        cout << "\t 3. Other position: " << endl;
        int choice;
        cout << "\nEnter your choice: ";
        choiceLable:
        cin >> choice;

        if(choice < 1 || choice > 3) {
            cout << "Your input is in out of range" <<  "\n\nPlease retry!..." << endl;
            cout << "\nEnter your choice: ";
            goto choiceLable;

        } else {
            if(size >= (MAX_SIZE - 2)) {
                switch(choice) {
                    case 1:

                        break;
                    case 2:

                        break;
                    case 3:
                        cout << "Enter the position where you want to insert the element: " << endl;
                        cin >> posit;
                        if(posit >= MAX_SIZE - 2) {

                        }
                        break;
                }
            } else {
                cout << "Array Size is full you can't insert any data";
            }

        }


    }


    return 0;
}




