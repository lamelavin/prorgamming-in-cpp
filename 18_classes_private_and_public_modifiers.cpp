#include <iostream>

using namespace std;

// How to define a class -->
/*
    class Name_Of_The_Class {
        private: (by default everything is private if i dont define it public)
        // code here
        public:
        // code here
    };
*/

class Employee {
private:
    int a, b, c;

public:
    int d, e;
    void setData(int, int, int);    // It is not necessary that I have to implement the function here. I can implement the function later too.

    // Implementing the function here -->
    void getData() {
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
        cout<<"The value of c is "<<c<<endl;
        cout<<"The value of d is "<<d<<endl;
        cout<<"The value of e is "<<e<<endl;
    }
};

// Example of not declaring the function in class
void Employee :: setData(int a1, int b1, int c1) {
    a = a1;
    b = b1;
    c = c1;
}

int main() {
    Employee lavin;

    lavin.d = 40;       // I am able to set these values because these vars are public
    lavin.e = 50;

    // lavin.a = 100    // If I try to do something like this i will get an error because a is private var and i cannot access it like this

    lavin.setData(10, 20, 30);
    lavin.getData();
    return 0;
}



// ******************* Why not structure? Why classes? ********************

// There is no data hiding in structure. If we want to protect our data so we cannot do that in structure. Also we cannot put functions inside structure. But we can do all this in class
