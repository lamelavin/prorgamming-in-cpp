#include <iostream>

using namespace std;


// Function overloading (same name with different params)
int sum(int, int);
int sum(int, int, int);

// Another example

// Calculate the area of a cylinder
int volume(double r, int h) {
    return (3.14 * r * r * h);
}

// Calculate the volume of a cube
int volume(int a) {
    return (a * a * a);
}

// Rectangular box
int volume(int l, int b, int h) {
    return (l * b * h);
}

int main() {
    cout<<"The sum of 3 and 6 is : "<<sum(3, 6)<<endl;
    cout<<"The sum of 3, 7, and 6 is : "<<sum(3, 7, 6)<<endl;

    cout<<"The volume of cuboid of 3, 7, and 6 is "<<volume(3, 7, 6)<<endl;
    cout<<"The volume of cylinder of radius 3 and height 6 is "<<volume(3, 6)<<endl;
    cout<<"The volume of cube of side 3 is "<<volume(3)<<endl;
    return 0;
}

int sum(int a, int b) { return a + b; }

int sum(int a, int b, int c) { return a + b + c; }

// ************** Function Overloading definition ****************

// Function overloading is a feature that allows multiple functions within the same scope to share the same name, provided they have different parameter lists. This means that the functions must differ in either the number of parameters, the data types of the parameters, or the order of the parameter types