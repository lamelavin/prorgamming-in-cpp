#include <iostream>
using namespace std;

class Complex {
    int real, imag;
    public:
        void getData(void) {
            cout << "The real part is " << real << "\n";
            cout << "The imaginary part is " << imag << "\n";
            
        }
        void setData(int x, int y) {
            real = x;
            imag = y;
        }

        // operator overloading examples
        Complex operator+(const Complex&);
        friend ostream& operator<<(ostream& out, const Complex& obj);
};

Complex Complex :: operator+(const Complex& obj1) {
    Complex temp;
    temp.real = obj1.real + real;
    temp.imag = obj1.imag + imag;
    return temp;
}

ostream& operator<<(ostream& out, const Complex& obj) {
    out << obj.real << " + " << obj.imag << "i";
    return out;
}

int main() {
    // Normal way...
    
    // Complex c1;                 
    // Complex* ptr = &c1;
    // c1.setData(1, 23);
    // c1.getData();

    // Using pointers...

    Complex* ptr = new Complex;         // another way of creating the object
    (*ptr).setData(1, 23);
    (*ptr).getData();                   // or ptr->getData();

    // we cannot do 'cout << c1' because c1 is an object and cout doesn't know what c1 object means. so I overloaded insertion operator (<<)
    cout << *ptr << "\n";         // ((cout << c1) << "\n")

    // Let's talk about ARROW Operator

    ptr->getData();                     // dereference the pointer and run getData of the object 

    delete ptr;

    // How do we create array of objects

    Complex* arr_of_objects = new Complex[3];

    arr_of_objects->setData(4, 23);
    cout << arr_of_objects[0] << "\n";

    (arr_of_objects+1)->setData(5, 2);
    cout << arr_of_objects[1] << "\n";
    
    delete[] arr_of_objects;
    return 0;
}