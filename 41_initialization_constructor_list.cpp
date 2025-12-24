#include <iostream>
using namespace std;

/*
    Syntax for initialization list in constructor:
    constructor (argument-list) : initialization-section
    {
        assignment + other code;
    }

    class Test {
        int a;
        int b;
        public: 
            Test(int i, int j) : a(i), b(j) {constructor-body}
    };
*/

class Test {
    // int a;
    // int b;
    int b, a; // solution. just declare b before a and everything will be alright.

public:
    // Test(int i, int j) : a(i), b(j) // this will run 
    // Test(int i, int j) : a(i), b(i+j) // this is also fine
    // Test(int i, int j) : a(i), b(a+j) // this will also work
    Test(int i, int j) : b(j), a(i + b) // run this and the output will be something garbage value. but why? because a is initialized first because look at line 20 and 21. swap the lines and you wont get the garbage value
    { 
        cout << "constructor executed" << endl;
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
    }
};

int main() {
    Test t(4, 6);
    return 0;
}