#include<iostream>
using namespace std;


struct linkList
{
    // public: 
    int data;


    void showData() { // we can make member function in c++ but we can't make in c language 
        cout << data;
    }
    
};
 


int main()
{
    linkList obj;

    obj.data = 10;

    obj.showData();

    // cout << "Enter the data into the link-list: ";
    // for(int i = 0; i < 5; i++) {
    //     cout << "at index: [" << i >> "] :";
    //     if(i > 0) {
    //         cin >> l1[i].data;
    //         l1[i - 1].link = &l1[i];
    //     }else {
    //         cin >> l1[i].data;
    //     }
        
    // }
    
    return 0;
}