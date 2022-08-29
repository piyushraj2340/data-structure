#include <iostream>
#define MAX_SIZE 50

using namespace std;

int size;

void insertArryElemLast(int*,int);
void insertArryElemFirst(int*,int);
void insertArryElemIndex(int*,int,int);


bool deleteArryElemValue(int*,int);
void deleteArryElemIndex (int*, int);
void deleteArryElemLast(int*);
void deleteArryElemFirst(int*);


int findArryElem(int*,int);


void displayArryElem(int*);


int main()
{

    int arry[MAX_SIZE];
    int tempData;
    int index;

    cout << "Enter the size of array less than " << MAX_SIZE << ": ";
    cin >> size;

    cout << "Enter the data into the elements: " << endl;
    for(int i = 0; i < size; i++)
    {
        cout << "at index: [" << i << "] : ";
        cin >> arry[i];
    }

    int choice;
    menu_driven:
    cout << "\n1. Insert a new Element into the array." << endl;
    cout << "2. Delete an element from an array." << endl;
    cout << "3. Search an element from an array." << endl;
    cout << "4. Display the element of an array." << endl;
    cout << "5. Exit." << endl;
    retryChoice:
    cout << "Please Enter your choice: ";
    cin >> choice;

    switch(choice)
    {
    case 1:
        cout << "\n1. Insert at First position." << endl;
        cout << "2. Insert at Last position." << endl;
        cout << "3. Insert at Given position." << endl;
        cout << "4. Back." << endl;

        insert_choice:

        cout << "Please Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
        case 1:
            cout << "\nEnter the number you want to insert into array: ";
            cin >> tempData;

            insertArryElemFirst(arry,tempData);

            cout << "\nYou have successfully inserted element at index: [0]." << endl;
            goto menu_driven;
            break;
        case 2:
            cout << "\nEnter the number you want to insert into array: ";
            cin >> tempData;

            insertArryElemLast(arry,tempData);

            cout << "\nYou have successfully inserted element at index: [" << size - 1 << "]." << endl;
            goto menu_driven;
            break;
        case 3:
            cout << "\nEnter the number you want to insert into array: ";
            cin >> tempData;

            insert_index:

            cout << "\nEnter the index where you want to insert element: ";
            cin >> index;

            if(index > size - 1 || index < 0) {
                cout << "\nThe position you enter is invalid." << endl << "\nPlease retry!...." << endl;
                goto insert_index;
            }

            insertArryElemIndex(arry,tempData,index);


            cout << "\nYou have successfully inserted element at index: [" << index << "]." << endl;
            goto menu_driven;
            break;
        case 4:
            goto menu_driven;
            break;
        default:
            cout << "Something went wrong!..." << endl;
            goto insert_choice;
        }

        break;
    case 2:
        cout << "\n1. Delete at First position." << endl;
        cout << "2. Delete at Last position." << endl;
        cout << "3. Delete at Given position." << endl;
        cout << "4. Delete with the Given element." << endl;
        cout << "5. Back." << endl;

        delete_choice:

        cout << "Please Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
        case 1:
            deleteArryElemFirst(arry);
            cout << "\nYou have successfully deleted element at index: [0]." << endl;
            goto menu_driven;
            break;
        case 2:
            deleteArryElemLast(arry);
            cout << "\nYou have successfully deleted element at index: [" << size - 1 << "]." << endl;
            goto menu_driven;
            break;
        case 3:
            delete_index:
            cout << "\nEnter the position where you want to delete the element: ";
            cin >> index;

            if(index > size - 1 || index < 0) {
                cout << "\nThe position you enter is invalid." << endl << "\nPlease retry!...." << endl;
                goto delete_index;
            }

            deleteArryElemIndex(arry, tempData);

            cout << "\nYou have successfully deleted element at index: [" << index << "]." << endl;
            goto menu_driven;
            break;
        case 4:
            cout << "\nEnter the Element you want to delete from the array: ";
            cin >> tempData;

            if(deleteArryElemValue(arry, tempData)) {
                cout << "\nYou have successfully deleted element whose value is : [" << tempData << "]." << endl;
            }

            goto menu_driven;
            break;
        case 5:
            goto menu_driven;
            break;
        default:
            cout << "\nSomething went wrong!..." << endl;
            goto delete_choice;
        }
        break;
    case 3:
        cout << "\nEnter the number you want to search into the array: ";
        cin >> tempData;

        findArryElem(arry, tempData);
        goto menu_driven;
        break;
    case 4:
        displayArryElem(arry);
        goto menu_driven;
        break;
    case 5:
        cout << "\nProgram is Closed successfully!..." << endl;
        break;
    default:
        cout << "\nSomething went wrong!..." << endl;
        goto retryChoice;
    }


    return 0;
}


void insertArryElemLast(int *arry,int value) {
    size = size + 1;
    arry[size - 1] = value;
}

void insertArryElemFirst(int *arry, int value) {
    size = size + 1;
    for(int i = size - 1; i > 0; i--) {
        arry[i] = arry[i - 1];
    }
    arry[0] = value;
}

void insertArryElemIndex(int *arry, int value, int index) {
    size = size + 1;
    for(int i = size - 1; i > index; i--) {
        arry[i] = arry[i - 1];
    }
    arry[index] = value;

}



bool deleteArryElemValue (int *arry,int numb)
{
    for(int i = 0; i < size; i++)
    {
        if(arry[i] == numb)
        {
            for(int j = i; j < size; j++)
            {
                arry[i] = arry[i + 1];
            }
            size = size - 1;
            arry[size] = 0;
            return true;
        }
        if(i == size - 1)
        {
            cout << "\nThe Number you want to delete is not present into the array." << endl;
            return false;
        }
    }

}

void deleteArryElemIndex (int *arry, int posit) {
    for(int i = posit; i < size; i++ ) {
        arry[i] = arry[i + 1];
    }
    size = size - 1;
    arry[size] = 0;
}

void deleteArryElemLast(int *arry) {
    size = size - 1;
    arry[size] = 0;
}

void deleteArryElemFirst(int *arry) {
    for(int i = 0; i < size; i++) {
        arry[i] = arry[i + 1];
    }
    size = size - 1;
    arry[size] = 0;
}

void displayArryElem(int arr[]) {
    cout << "\nElement in an array are: " << endl;

    for(int i = 0; i < size; i++) {
        cout << "at index : [" << i << "]: " << arr[i] << endl;
    }
}

int findArryElem(int arr[],int numb) {
    for(int i = 0; i < size; i++) {
        if(arr[i] == numb) {
            cout << "\nElement is at index: [" << i << "]." << endl;
            return i;
        }
        if(i == size - 1) {
            cout << "\nNo such element present in an array." << endl;
            return -1;
        }
    }
}
