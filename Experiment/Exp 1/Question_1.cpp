#include <iostream>
#define MAX_SIZE 50

using namespace std;


int main() {

    int LA[MAX_SIZE];
    int N;
    int K;

    cout << "Enter the size of an array: ";
    cin >> N;

    cout << "Enter the element for an array: " << endl;

    for(int i = 0; i < N; i++) {
        cout << "at index: [" << i << "]: ";
        cin >> LA[i];
    }

    menu_driven:
    cout << "\nThese are the following operation you want to preform on an array :- " << endl;
    cout << "1. Insert a new Element into the array." << endl;
    cout << "2. Delete an element from an array." << endl;
    cout << "3. Exit." << endl;

    int choice;
    int data;

    cout << "\nPlease Enter your choice: ";
    cin >> choice;


    switch(choice) {
        case 1:
            cout << "\nEnter the number you want to insert into the array: ";
            cin >> data;
            insert_index:
            cout << "\nEnter the position where you want to insert the data: ";
            cin >> K;

            if(K > N - 1 || K < 0) {
                cout << "\nThe position you enter is invalid." << endl << "\nPlease retry!...." << endl;
                goto insert_index;
            }

            N = N + 1;

            for(int i = N - 1; i > K; i--) {
                LA[i] = LA[i - 1];
            }

            LA[K] = data;

            cout << "\nYour Final Array are: " << endl;
            for(int i = 0; i < N; i++) {
                cout << "at Index [" << i << "]: " << LA[i] << endl;
            }

            break;
        case 2:
            delete_index:
            cout << "\nEnter the position where you want to delete the data: ";
            cin >> K;

            if(K > N - 1 || K < 0) {
                cout << "\nThe position you enter is invalid." << endl << "\nPlease retry!...." << endl;
                goto delete_index;
            }


            for(int i = K; i < N; i++) {
                LA[i] = LA[i + 1];
            }

            N = N - 1;

            LA[N] = 0;



            cout << "\nYour Final Array are: " << endl;
            for(int i = 0; i < N; i++) {
                cout << "at Index [" << i << "]: " << LA[i] << endl;
            }

            break;

        case 3:
            cout << "\nApplication is closed successfully!..." << endl;
            break;
        default:
            cout << "\nSomething went wrong!.... " << endl;
            goto menu_driven;
    }


    return 0;
}
