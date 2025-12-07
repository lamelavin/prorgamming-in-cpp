#include <iostream>

using namespace std;

class Complex {
    int a;
    int b;

public:
    void setNumber(int, int);
    void printNumber(void);

    // Below line means that non member - sumComplex function is allowed to do anything with this class's private members.
    friend Complex sumComplex(Complex, Complex);        // try running the code withouth this line and you will understand what friend function does
};

Complex sumComplex(Complex o1, Complex o2) {
    Complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main() {
    Complex c1, c2, sum;
    c1.setNumber(1, 4);
    c1.printNumber();

    c2.setNumber(5, 8);
    c2.printNumber();

    sum = sumComplex(c1, c2);
    sum.printNumber();
    return 0;
}

void Complex::setNumber(int v1, int v2) {
    a = v1; b = v2;
}

void Complex::printNumber(void) {
    cout << "Your complex number is "<<a<<" + "<<b<<"i"<<endl;
}

// ************** Properties of Friend Function ****************
/*
    1. Not in the scope of the class.
    2. Since it is not in the scope of the class, it cannot be called from the object of that class. c1.sumComplex() == Invalid
    3. Can be invoked without the help of any object.
    4. Usually contains objects as arguments.
    5. Can be declared inside public or private section of the class.
    6. It cannot access the member directly by their names and need object_name.member_name to access any member.
*/