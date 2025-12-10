#include <iostream>

using namespace std;

// Earlier when I was creating an object I was creating a specific function for setting up (assigning) the values to the data members. We can avoid that and assign those values directly when object is created using constructor

// Constructor is a special member function with the same name as of the class. 
// It is automatically invoked when an object is created
// It is used to initialize the objects of its class

class Complex {
    int a, b;
    public:
        Complex(void);  // construction declaration (same name as class)
        void printNumber() {
            cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
        }
};

// This is a default constructor because it doesn't takes any parameters
Complex :: Complex(void) {
    a = 10;
    b = 0;
}

int main() {
    Complex c;      // I don't have to run setNumber for this object now because it is using constructor
    c.printNumber(); 
    return 0;
}

// ****************** Characteristics *****************
/*
    1. It should be declared in the public section of the class
    2. They are automatically invoked whenever the object is created
    3. They cannot return values and do not have return types
    4. It can have default arguments
    5. We cannot refer to their address
*/