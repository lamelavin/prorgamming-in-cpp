#include <iostream>

using namespace std;

int main() {
    // What is a pointer? ---> data type which holds the address of other data types
    
    int a = 3;
    int *p = &a;
    
    // & --> Address of operator
    cout<<"The address of a is "<<p<<endl;

    // * --> Dereferencing operator (value at)
    cout<<"The value at address b is "<<*p<<endl;

    // Pointer to pointer
    int **pointer_to_pointer = &p;
    cout<<"Address of pointer p is "<<&p<<endl;
    cout<<"Address of poitner p through pointer to pointer is "<<pointer_to_pointer<<endl; 
    cout<<"The value at pointer to pointer is "<<*pointer_to_pointer<<endl;
    cout<<"The value at address value (address(poitner_to_pointer)) is "<<**pointer_to_pointer<<endl;
    return 0;
}