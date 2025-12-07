#include <iostream>

using namespace std;

class Employee {
    int id;
    int salary;
    public:
    void setID(void) {
        salary = 122;
        cout<<"Enter the ID of employee: ";
        cin>>id;
    }
    void getID(void) {
        cout<<"The id of this employee is: "<<id<<endl;
    }
};

int main() {
    // Employee a, b, c, d;
    // a.setID();
    // a.getID();
    // This isn't the effective way of storing Employees because imagine if the number of employees is 2k or 3k or even more.
    // so we will store objects into arrays

// *********************** Array of Objects *************************
    Employee arr[5];

    for (int i = 0; i < 5; i++) {
        arr[i].setID();
        arr[i].getID();
    }
    
    return 0;
}
