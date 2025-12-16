#include <iostream>

using namespace std;

class Base {
    int data1; // private by default and is not inheritable
    public:
        int data2;
        void setData();
        int getData1();
        int getData2();
};

void Base :: setData(void) {
    data1 = 10;
    data2 = 20;
}

int Base :: getData1(void) {
    return data1;
}

int Base :: getData2(void) {
    return data2;
}


// Class is being derived publically (try changing the public keyword to private and see what happens)
class Derived : public Base {
    int data3;
    public:
        void process();
        void display();
};

void Derived :: process(void) {
    data3 = data2 * getData1();
}

void Derived :: display(void) {
    cout << "Value of data1 is " << getData1() << endl;
    cout << "Value of data2 is " << data2 << endl;
    cout << "Value of data3 is " << data3 << endl;
}

int main() {
    Derived der;
    der.setData();
    der.process();
    der.display();
    return 0;
}