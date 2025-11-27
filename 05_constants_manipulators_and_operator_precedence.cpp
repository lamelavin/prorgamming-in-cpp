// Constants, Manipulators, and Opeartor Precedence

#include <iostream>

#include <iomanip> // to get a manipulator 'setw'

using namespace std;

int main() {

    int a = 34;
    cout << "The value of a is " << a << endl;
    a = 1;
    cout << "The value of a is " << a <<endl; // this changed the value of a 


    // ************** Constants in C++ *****************

    const int a = 34;
    // When we don't want to change a variable's value in future, we use const
    cout<<"The value of a was "<<a<<endl;
    // a = 4;  this line will throw an error --> error: assignment of read-only variable ‘a’
    cout<<"The value of a is "<<a<<endl;


    // ************** Manipulators in C++ *****************


    // manipulators helps us in formating the code. an example of manipulator is 'endl'
    int a = 3, b = 78, c = 1233;
    cout<<"The value of a without setw is "<<a<<endl;
    cout<<"The value of b without setw is "<<b<<endl;
    cout<<"The value of c without setw is "<<c<<endl;

    cout<<"The value of a is "<<setw(4)<<a<<endl;       // It is nothing but helps in formatting
    cout<<"The value of b is "<<setw(4)<<b<<endl;
    cout<<"The value of c is "<<setw(4)<<c<<endl;


    // ***************** Operator precedence in C++ ******************

    // search on google for more details (operators precedence in cpp)
    int a = 3, b = 5;
    int c = ((((a*5)+b)+45)-10);
    cout<<c<<endl;

    return 0;
}