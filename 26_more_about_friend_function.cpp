#include <iostream>

using namespace std;

// Using referencing to swap the values of two diff class

// Forward declaration
class C2;

class C1 {
    int value1;
    public:
        void inData(int a) {
            value1 = a;
        }
        void display(void) {
            cout << value1 <<endl;
        }
        friend void exchange(C1&, C2&);
};

class C2 {
    int value2;
    public:
        void inData(int a) {
            value2 = a;
        }
        void display(void) {
            cout << value2 <<endl;
        }
        friend void exchange(C1&, C2&);
};

// Swaping logic using referencing
void exchange(C1& x, C2& y) {
    int temp = x.value1;
    x.value1 = y.value2;
    y.value2 = temp;
}

int main() {
    C1 oc1;
    C2 oc2;

    oc1.inData(34);
    oc2.inData(66);

    exchange(oc1, oc2);

    cout<<"The value1 after exchanging becomes "<<endl;
    oc1.display();

    cout<<"The value2 after exchanging becomes "<<endl;
    oc2.display();

    return 0;
}




// ********************** Basic Example of Friend Function *******************
/*
// Forward declaration
class Y;

class X {
    int data;
    public:
        void setValue(int);
        friend void add(X, Y);
};

class Y {
    int num;
    public:
        void setValue(int);
        friend void add(X, Y);
};


// void add(X, Y);      I don't need to write this here if I am using friend function


int main() {
    X a;
    a.setValue(3);

    Y b;
    b.setValue(5);

    add(a, b);
    return 0;
}

void X :: setValue(int value) {
    data = value;
}

void Y :: setValue(int value) {
    num = value;
}

void add(X o1, Y o2) {
    cout<<"Summing datas of X and Y objects gives me "<<(o1.data + o2.num)<<endl;
}
*/