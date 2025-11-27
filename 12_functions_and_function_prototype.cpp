#include <iostream>

using namespace std;

// This is function prototype (When we declare the type, name of the function and what params it take but don't write its definition then it becomes the function prototype)
int sum(int a, int b);      // --> acceptable

// int sum(int, int);       // --> acceptable
// int sum(int a, b);       // --> not acceptable because every variable, explicitly must have their own datatype

void g(void);

int main() {
    int num1, num2;
    cout<<"Enter first and second number: ";
    cin>>num1>>num2;

    // num1 and num2 are actual parameters
    cout<<"The sum of "<<num1<<" and "<<num2<<" is "<<sum(num1, num2)<<endl;

    g();
    return 0;
}

// creating function (writing the definition here)
// Formal parameters a and b will be taking values from actual parameters (num1 and num2)
int sum(int a, int b) {
    return a+b;
}

void g() {
    cout<<"Hello, Good Morning"<<endl;
}