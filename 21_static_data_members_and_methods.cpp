#include <iostream>

using namespace std;

// Let's say that we are creating a class of Employees and we want to keep the record of how many employees we have

class Employee {
    int ID;

// ******************** Static Data Member *****************

    // int count; if I want to count the number of employees I have then i have to make it static

    static int count;   // It means that we are saying that there will be a global variable, shared by all objects.
    
    // I don't have to initialize the static varible with 0 because by default its initialized with 0

    public:
        void setData(void) {
            cout<<"Enter the ID: ";
            cin>>ID;
            count++;
        }
        void getData(void) {
            cout<<"The ID of this employee is "<<ID<<" and this is employee number: "<<count<<endl;
        }
// ******************** Static Member Functions *******************

    // It is only used to access the static variables, cannot access non-static variables, cannot use this, cannot be virtual, doesn't requrie object because it belongs to class
        static void getCount(void) {
            // cout<<ID; // if I try printing this, it will throws an error
            cout<<"The value of count is "<<count<<endl;
        }
};

// By writing this we declare the variable (now it will have a memory location)
// int Employee::count = 1000;    // default value is 0, I can change it here if I want
int Employee::count;
// this count will be class property, not object property

int main() {
    Employee lavin, a, b;
    // lavin.ID = 1;
    // lavin.count = 1;
    // cannot do this as ID and count are private

    lavin.setData();
    lavin.getData();
    Employee::getCount();   // WE don't need to write the object name before calling it
    
    a.setData();
    a.getData();
    Employee::getCount();
    
    b.setData();
    b.getData();
    Employee::getCount();
    return 0;
}
