#include <iostream>
using namespace std;

// Base class
class Employee {
    // int id;
    float salary;
    public:
        int id;
        Employee() {}
        Employee(int ID) {
            id = ID;
            salary = 34;
        }
        void display(void) {
            cout << salary << endl;
        }
};

// Derived class
/*
    class derived-class-name : visibility-mode-base {{base-class-name}} {
        class members/methods/etc
    }
    
    Note :
    1. Default visibility mode is private 
    2. Public visibility mode : Public members of the base class becomes public members of the derived class
    3. Private visibility mode : Public members of the base class becomes private members of the derived class
    4. Private members are never inherited
*/

// hint : try removing this public from here to understand 
class Programmer : public Employee {
    public:
        int languageCode;
        // now whenever I call this I have to make sure that a default constrcutor exists in /Employee (base class), because whenever an object of this class will be created it will look for a default constructor in base class
        Programmer(int ID) {
            //  id = ID; // I can't do this because the id in the employee was private and i can inherit anything that was private in base class. So for that first i have to make id public to use it
            id = ID;
            languageCode = 9;
        }
        void getData(void) {
            cout << id << endl;
        }
};

int main() {
    Employee lavin(1), rohan(2);
    lavin.display();
    rohan.display();

    Programmer skillf(10);
    cout << skillf.id << endl;
    cout << skillf.languageCode << endl;
    skillf.getData();
    return 0;
}
