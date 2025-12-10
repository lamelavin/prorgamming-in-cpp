#include <iostream>

using namespace std;

class Complex {
    int a, b;
    public:
        Complex(int, int);      // Constrcutor declaration
        void printNumber() {
            cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
        }
};

// Default constructor
// Complex :: Complex(void) {
//     a = 10;
//     b = 0;
// }

// Parameterized Constrcutor
Complex :: Complex(int x, int y) {
    a = x;
    b = y;
}

int main() {
    // Complex a;              // Constructor will run automatically

    // How to call a parameterized constructor :

    // Implicit call : 
    Complex a(4, 6);
    // or like this (Explicit call) :
    Complex b = Complex(4, 6);

    a.printNumber();
    b.printNumber();
    return 0;
}