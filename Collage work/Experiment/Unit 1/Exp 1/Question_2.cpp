#include <iostream>
#define MAX_SIZE 50

using namespace std;


int main()
{

    int LA[MAX_SIZE];
    int N;
    int K;

    cout << "Enter the size of an array: ";
    cin >> N;

    cout << "Enter the element for an array: " << endl;

    for(int i = 0; i < N; i++)
    {
        cout << "at index: [" << i << "]: ";
        cin >> LA[i];
    }

    cout << "\nTraversing operation on an Array are: " << endl;
    for(int i = 0; i < N; i++)
    {
        cout << "at Index [" << i << "]: " << LA[i] << endl;
    }


    return 0;
}
