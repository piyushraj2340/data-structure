/* Introduction to Recursion */

#include<iostream>
using namespace std;

void fun1(int n) {
    if(n > 0) {
        cout << n; // calling phase || also called ascending looping
        fun1(n - 1);
    }
}

void fun2(int n) {
    if(n > 0) {
        fun2(n - 1);
        cout << n; // returning phase || also called decending looping 
    }
}


/* 
    Calling phase are the statement which appear before the recursive calling function 
    returning phase are the statement which apper after the recursive calling function  
*/


int main()
{
    int x = 3;
    fun1(x);
    cout << endl;
    fun2(x);
    return 0;
}