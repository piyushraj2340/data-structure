#include<iostream>
using namespace std;

int sumElement(int arr[], int n) {
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum = sum + arr[i];
    }

    return sum;
}
 
int main()
{
    int n;
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++)
        cin >> arr[i]

    cout << sumElement() << endl;
 
    return 0;
}