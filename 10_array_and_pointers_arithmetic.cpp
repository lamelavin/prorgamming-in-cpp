#include <iostream>

using namespace std;

int main() {

    int arr_marks[5];
    for(int i = 0; i < 5; i++) {
        cout<<"Enter the "<<i+1<<" element of the array: ";
        cin>>arr_marks[i];
    }
    for (int i = 0; i < 5; i++) {
        cout<<i+1<<" Element of the array is : "<<arr_marks[i]<<endl;
    }


    int arr_marks[5] = {12, 14, 16, 20, 11};
    // cout<<&arr_marks[0]<<endl;
    // cout<<&arr_marks[1]<<endl;
    // cout<<&arr_marks[2]<<endl;

    // ****************** Pointers and Arrays ********************

    int *p = arr_marks;         // This will point to the address of arr_marks[0] and when i'll use * it will give me the value of arr_marks[0] ie 12

    // p++;                     // This will increment p from pointing address of arr_marks[0] to arr_marks[1], and when i dereference the it i will get 14

    cout<<*(p++)<<endl;
    cout<<*p<<endl;

    return 0;
}