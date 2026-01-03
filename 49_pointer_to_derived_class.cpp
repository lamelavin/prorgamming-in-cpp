#include <iostream>
using namespace std;

class Base {
    public:
        int var_base;
        void display(void) {
            cout << "Displaying base class variable var_base " << var_base << "\n";
        }
};

class Derived : public Base {
    public:
        int var_derived;
        void display(void) {
            cout << "Displaying base class variable var_base " << var_base << "\n";
            cout << "Displaying derived class variable var_derived " << var_derived << "\n";
        }
};

int main() {
    Base obj_base;
    Base* base_class_pointer;
    
    Derived obj_derived;

    // ****************** Early Binding Concept *********************

    base_class_pointer = &obj_derived;      // Pointing base class pointer to derived class
    base_class_pointer->var_base = 30;
    base_class_pointer->display();

    /*
        This happened because C++ will look at the type and bind the pointer with that class.

        Base* base_class_pointer;
          ^         ^
          |         |
          |    (it will point to the Base class)
    (type of the pointer)
    */
    
    // base_class_pointer->var_derived = 30;        // this will throw an error because the pointer is pointing at base class, not derived class.

    // Now let's create a derived class pointer
    Derived* derived_class_pointer;
    derived_class_pointer = &obj_derived;
    derived_class_pointer->var_derived = 100;       // now I can access this var_derived
    derived_class_pointer->var_base = 40;           // I can also change var_base through derived class pointer (because of inheritance)
    derived_class_pointer->display();

    base_class_pointer->display();


    /*
    // ****************** QUICK QUESTION ****************

        Derived* d = &obj_derived;
        Base* b = d;
        b->display();           // what this will print
    */   

    return 0;
}