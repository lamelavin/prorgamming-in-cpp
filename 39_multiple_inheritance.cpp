#include <iostream>

using namespace std;

/*
syntax for inheriting multiple inheritance :

class Derived : visibility-mode-base1, visibility-mode-base2 {
    // class body of class "Derived"
};
*/

class Base1 {
    protected:
        int base1int;
    public:
        void set_base1int(int);
};

void Base1 :: set_base1int(int a) {
    base1int = a;
}

class Base2 {
    protected:
        int base2int;
    public:
        void set_base2int(int);
};

void Base2 :: set_base2int(int b) {
    base2int = b;
}


class Derived : public Base1, public Base2 {
    public:
        void show(void) {
            cout << "The value of base1 is " << base1int << endl
            << "The value of base2 is "<< base2int << endl
            << "The sum of these values is " << base1int + base2int << endl;
        }
};
/*
The inherited Derived class will look something like this : 
Data Members :
    base1int --> protected
    base2int --> protected
Member Functions :
    set_base1int() --> public
    set_base2int() --> public
    show() --> public

*/
int main() {
    Derived lavin;
    lavin.set_base1int(5);
    lavin.set_base2int(25);
    lavin.show();
    return 0;
}