#include <iostream>

using namespace std;

class A {
    int a;
    public:
        void setData(int);
        void getData(void);
};

// void A :: setData(int a) {
//     a = a;
// }

void A :: setData(int a) {
    this->a = a;
}

void A :: getData(void) {
    cout << "The value of a is " << a << "\n";
}

int main() {
    A obj;
    obj.setData(4);     // 'a' will be assigned a garbage value
    obj.getData();      // This will print an garbage value

    // To solve this problem we have a special keyword in cpp called 'this'.
    // 'this' is a keyword which is a pointer which points to the object which invokes the member function.
    return 0;
}

/*
#include <iostream>

using namespace std;

class A {
    int a;
    public:
        A& setData(int);
        void getData(void);
};

A& A :: setData(int a) {
    this->a = a;
    return *this;
}

void A :: getData(void) {
    cout << "The value of a is " << a << "\n";
}

int main() {
    A* a = new A;
    a->setData(4).getData();
    return 0;
}

*/