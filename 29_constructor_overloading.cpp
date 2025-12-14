#include <iostream>

using namespace std;

class Complex {
    int a, b;
    public:
    // Default constructor
        Complex () {
            a = 0;
            b = 0;
        }
    // Parameterized constructor
        Complex(int x, int y) {
            a = x;
            b = y;
        }
    // Parameterized constructor
        Complex(int x) {
            a = x;
            b = 0;
        }

        void printNumber() {
            cout << "Your number is "<< a << " + " << b << "i"<<endl; 
        }

        
};


int main() {
    Complex o1, o2(2, 3), o3(4);
    o1.printNumber();
    o2.printNumber();
    o3.printNumber();
    return 0;
}
