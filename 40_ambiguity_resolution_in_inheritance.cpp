#include <iostream>

using namespace std;

class Base1 {
    public:
        void greet() {
            cout << "How are you" << endl;
        }
};

class Base2 {
    public:
        void greet() {
            cout << "Kese ho" << endl;
        }
};

class Derived : public Base1, public Base2 {
    int a;
    public:
    // this means that whenever someone calls the derived class greet then the base1 class greet should be called
        void greet() {
            Base1 :: greet();
        }
};

int main() {
    Base1 base1obj;
    Base2 base2obj;
    
    base1obj.greet();
    base2obj.greet();

    Derived d;
    // d.greet();   error: request for member ‘greet’ is ambiguous
    d.greet();      // now this will now give errors

    return 0;
}