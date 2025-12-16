#include <iostream>
using namespace std;

class Number {
    int a;
    public:
        //  default constuctor
        Number() {}
    
        // parameterized constructor
        Number(int num) {
             a = num;
        } 
        // copy consructor
        // When no copy constuctor is found, compiler supplies its own copy constructor (ie if I comment this copy constructor, object will be still copied)
        Number(Number& obj) {
            cout << "copy constuctor called"<<endl;
             a = obj.a;
        }
       void display() {
            cout << "The number for this object is " << a << endl;
       }
};


int main() {
    Number x, y, z(45), s2;
    z.display();

    // Let's say I want to make z1 and I want s1 should exactly resemble z, then I will use copy constructor
    Number s1(z); // copy constructor invoked
    s1.display();

    s2 = z; // copy constructor not called
    s2.display();

    Number s3 = z; // copy constructor invoked
    return 0;
}
