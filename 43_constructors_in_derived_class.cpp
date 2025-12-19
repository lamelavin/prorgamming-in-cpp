#include <iostream>

using namespace std;

/*
    Case1:
    class B: public A {
        // Order of execution of constructor -> first A() then B()
    };

    Case2:
    class A: public B, public C {
        // Order of execution of constructor -> B() then C() then A()
    };

    Case3:
    class A: public B, virtual public C {
        // Order of execution of constructor -> C() then B() then A()
    };
*/

class Base1 {
    int data1;
    public:
        Base1(int);
        void printDataBase1(void);
};

Base1 :: Base1(int i) {
    data1 = i;
    cout << "Base1 class constructor called" << endl;
}

void Base1 :: printDataBase1(void) {
    cout << "The value of data1 is " << data1 << endl;
}


class Base2 {
    int data2;
    public:
        Base2(int);
        void printDataBase2(void);
};

Base2 :: Base2(int i) {
    data2 = i;
    cout << "Base2 class constructor called" << endl;
}

void Base2 :: printDataBase2(void) {
    cout << "The value of data2 is " << data2 << endl;
}

class Derived : public Base1, public Base2 {
    int derived1, derived2;
    public:
        Derived(int, int, int, int);
        void printDataDerived(void);
};

Derived :: Derived(int a, int b, int c, int d) : Base1(a), Base2(b) {
    derived1 = c;
    derived2 = d;
    cout << "Derived class constructor called" << endl;
}

void Derived :: printDataDerived(void) {
    cout << "The value of derived1 is " << derived1 << endl
    << "The value of derived2 is " << derived2 << endl;
}

int main() {
    Derived lavin(1, 2, 3, 4);
    lavin.printDataDerived();
    return 0;
}

/*
    ***************** Constructors in Derived Class **********************

    1. We can use constructors in derived class in C++
    2. If base class constructor doesn not have any arguments, then there is no need of any constructor in dervied class
    3. But if there are one or more arguments in the base class constructor, derived class needs to pass arguments to the base class constructor.
    4. If both base and derived class have constructors, base class constructor is executed first.

    ***************** Constructors in Multiple Inheritance *******************
    
    1. In multiple inheritance, base class are constructed in the order in which they appear in the class declaration.
    2. In multilevel inheritance, the constructors are executed in the order of inheritance

    ******************** Special Syntax **********************

    1. C++ supports an special syntax for passing arguments to multiple base classes.
    2. The constructor of the derived class receives all the arguments at once and then will pass the calls to the respective base classes/
    3. The body is called after all the constructors are finsihed executing.

    ***************** Special Case for Virtual Base Class *********************

    1. The constructors for virtual base classes are invoked before an nonvirtual base class.
    2. If there are multiple virtual base classes, they are invoked in the order of declaration.
    3. Any non-virtual base class are then constructed before the derived class constructor is executed.
*/