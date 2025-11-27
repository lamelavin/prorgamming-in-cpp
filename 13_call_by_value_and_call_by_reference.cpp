#include <iostream>

using namespace std;

int sum(int, int);

// This will not swap the value of a and b
void swap(int, int);

// To swap the value of a and b we have to use pointer reference
void swapPointer(int*, int*);

// Now I will swap the values using C++ reference variables
void swapReferenceVar(int &, int &);


// Just to see how I change the variable using this C++ reference variables
int & swapReferenceVars(int &, int &);

int main() {
    // cout<<"The value of 4 + 5 is "<<sum(4, 5)<<endl;

    int x=4, y=5;
    cout<<"The value of x is "<<x<<endl<<"The value of y is "<<y<<endl;
    // swap(x, y);                      // This will not swap
    // swapPointer(&x, &y);             // This will swap the values (pointer refenrece)
    // swapReferenceVar(x, y);          // This will also swap the values (C++ var reference)

    // When we use call by C++ reference we also have the power to change the actual values of the variable through reference...
    
    swapReferenceVars(x, y) = 1000;     // What I did here was swapReferenceVars returned a reference variable of x and then I modified the x = 1000;


    cout<<"The value of x is "<<x<<endl<<"The value of y is "<<y<<endl;
    return 0;
}

int sum(int a, int b) {
    int c = a + b;
    return c;
}

void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}


// **************** Call by reference using pointers reference ****************
void swapPointer(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// *************** Call by reference using C++ reference ***************
void swapReferenceVar(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}


int & swapReferenceVars(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
    return a;       // Let's say I am returning a reference here
}