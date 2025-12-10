#include <iostream>
using namespace std;

// Forward Declaration
class Complex;

class Calculator {
    public:
        int add(int, int);
        int sumRealComplex(Complex, Complex);
        int sumCompComplex(Complex, Complex);
};

class Complex {
    int a, b;

    // individually declaring functions as friends
    friend int Calculator :: sumRealComplex(Complex, Complex);      // other class's function is friend with this class
    friend int Calculator :: sumCompComplex(Complex, Complex);
    // But if there are multiple function that I want them to be friends. I won't be writing each name one by one, instead I will make the whole class it's friend

    // Aliter : Declaring the entire class as friend
    friend class Calculator;        // If I do this then I don't need to write the things I've written above

    public:
        void setNumber(int, int);
        void printNumber();
};

int main() {
    Complex o1, o2;
    o1.setNumber(1, 4);
    o2.setNumber(5, 7);

    o1.printNumber();
    o2.printNumber();

    Calculator calc;
    int res = calc.sumRealComplex(o1, o2);
    cout<<"The sum of real part of o1 and o2 is "<<res<<endl;
    
    res = calc.sumCompComplex(o1, o2);
    cout<<"The sum of complex part of o1 and o2 is "<<res<<endl;
    return 0;
}

void Complex :: setNumber(int n1, int n2) {
    a = n1;
    b = n2;
}

void Complex :: printNumber() {
    cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
}

int Calculator :: add(int a, int b) {
    return (a + b);
}

int Calculator :: sumRealComplex(Complex o1, Complex o2) {
    return (o1.a + o2.a);
}

int Calculator :: sumCompComplex(Complex o1, Complex o2) {
    return (o1.b + o2.b);
}