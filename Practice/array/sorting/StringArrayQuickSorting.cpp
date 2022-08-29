#include <iostream>

using namespace std;

int quick(char str[],int s, int e) {
    char pivot = str[s];
    int p = s;
    char temp;
    
    while(s <= e) {
        while(int(pivot) >= int(str[s])) {
            s++;
        }
        while(int(pivot) < int(str[e])) {
            e--;
        }
        if(s < e) {
            temp = str[s];
            str[s] = str[e];
            str[e] = temp;
        }
    }
    temp = str[e];
    str[e] = str[p];
    str[p] = temp;
    
    return e;
}


void quickSort(char str[],int s,int e) {
    int p;
    if(s < e) {
        p = quick(str,s,e);
        quickSort(str,s,p-1);
        quickSort(str,p+1,e);
    }
}

int main()
{
    char name[] = "xyz972971Zabc"; //size is 13
    
    quickSort(name,0,12);
    
    cout << name;

    return 0;
}
