#include <iostream>

using namespace std;

// global variable
int c = 45;

int main() {
    // ******************* Built in Data types *******************

    int a, b, c;
    cout<<"Enter the value of a: "<<endl;
    cin>>a;
    cout<<"Enter the value of b: "<<endl;
    cin>>b;
    c = a + b;
    cout<<"The sum is "<<c<<endl;
    // now i want to print global c
    cout<<"The global c is "<<c<<endl;
    // but surprisingly this doesn't print global c, this is printing local variable c

    // we can use scope resolution operator to tell the compiler that we are talking about the global c '::'
    cout<<"The global c is "<<::c<<endl;


    // ***************** float, double, and long double litereals **************

    // 34.4 If i try to print the type of this variable then c++'s compiler will say that it is a double (hell naw how is this double?)
    // If i want to make it a float i have to write a f (small or long doesn't matter) in the end like this 34.4f
    float d = 34.4f;  
    // also i have to write l in the end to make it long double
    long double e = 34.4l;
    cout<<"The value of d is "<<d<<endl<<"The value of e is "<<e<<endl;
    cout<<"The sizeof 34.4 is "<<sizeof(34.4)<<endl;
    cout<<"The sizeof 34.4f is "<<sizeof(34.4f)<<endl;
    cout<<"The sizeof 34.4F is "<<sizeof(34.4F)<<endl;
    cout<<"The sizeof 34.4l is "<<sizeof(34.4l)<<endl;
    cout<<"The sizeof 34.4L is "<<sizeof(34.4L)<<endl;


    // ****************** Reference variables ***********************
/*
    int x = 38;
    int & y = x;
    // this isn't creating a new variable, this is just another name for variable x
*/
    // ****************** Typecasting *******************

    int a = 45;
    float b = 45.46f;
    cout<<"The value of a is "<<(float)a<<endl;
    cout<<"The value of b is "<<(int)b<<endl;
    // note : this does't change the origianl type of the variable until i do it manually

    // i can also write them like this (this version makes more sense to me bc im from python bg)
    cout<<"The value of a is "<<float(a)<<endl;
    cout<<"The value of b is "<<int(b)<<endl;
    int c = int(b);

    cout<<"The expression is "<<a + b<<endl;
    cout<<"The expression is "<<a + int(b)<<endl;
    cout<<"The expression is "<<a + (int)b<<endl;

    return 0;
}