#include <iostream>

using namespace std;

class Complex {
    int a;
    int b;
    public:
        void setData(int, int);
        void setDataBySum(Complex, Complex);
        void printNumber(void) {
            cout<<"Your complex number is "<<a<<"+"<<b<<"i"<<endl;
        }
};

int main() {
    Complex c1, c2, c3;
    c1.setData(1, 2);
    c1.printNumber();

    c2.setData(3, 4);
    c2.printNumber();

    c3.setDataBySum(c1, c2);
    c3.printNumber();
    return 0;
}

void Complex::setData(int v1, int v2) {
    a = v1;
    b = v2;
}

void Complex::setDataBySum(Complex obj1, Complex obj2) {
    a = obj1.a + obj2.a;
    b = obj1.b + obj2.b;
}
