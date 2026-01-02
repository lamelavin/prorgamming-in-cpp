#include <iostream>

using namespace std;

int main() {
    // Basic Example of a pointer
    int a = 10;
    int* ptr = &a;

    cout << "The value of a is " << *(ptr) << "\n";

    // ******************** new operator (keyword) ****************** 
    // It is used to create a pointer dynamically

    int* p = new int(50);   // can make it float also
    cout << "The value at address p is " << *(p) << "\n";

    // Let's say we want to allocat a block of memory to 5 integers
    int* arr = new int[5];
    int i = 0;
    
    while (i < 5 && cin >> arr[i]) {
        i++;
    }

    for (int j = 0; j < i; j++) {
        cout << "Value of " << j+1 << " element is " << arr[j] << "\n";
    }

    // ********************* delete operator **********************

    delete p;
    delete[] arr;

    return 0;
}

/*
    **************** Before learning about new and delete, learn about pointers ******************

    Here is how pointers behave when we use them with const

    Case 1:

    int x = 10;
    const int* ptr = &x;
    *ptr = 20;   we cannot modify the value of ptr.
    But how do we know that ptr will get modified or not -->
    Step 1: start from the name of the variable
    ptr
    Step 2: move outwards
    *   → ptr is a pointer
    Step 3: what does the pointer point to?
    const int
    So the thing being pointed to is const.

    Meaning : ptr is a pointer to const int

    Case 2:

    int x = 10;
    int* const ptr = &x; 

    int y = 20;
    // ptr = &y;    We cannot do this
    *ptr = 30;      // we can do this

    Reasoning:
    Step 1: name of the variable
    ptr

    Step 2: move outwards
    const → ptr itself is const

    Step 3: continue
    * → ptr is a pointer
    int → to int

    Final meaning: ptr is a const pointer to int

    Case 3: both const
    
    const int* const ptr;

    ptr → const
    * → pointer
    const int → value const

    Fianl Meaning: const pointer to const int

*/