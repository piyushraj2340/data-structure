#include <iostream>

using namespace std;

int binarySerarch(int arr[], int search , int l, int u) {
    int mid = (l + u) / 2;

    if(arr[mid] == search) {
        return mid;
    }
    else {
        if(l == u) {
            return -1;
        }
        else {
            if(arr[mid] > search) {
                u = mid - 1;
                binarySerarch(arr,search, l, u);
            }
            else {
                l = mid + 1;
                binarySerarch(arr,search, l, u);
            }
        }
    }

}


int main()
{
    int arry[10] = {1,2,3,4,5,6,7,8,9,10};

    cout << binarySerarch(arry,10,0,9);

    return 0;
}
