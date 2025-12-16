#include <iostream>

using namespace std;

class Base {
    protected:
        int a;
    private:
        int b;
};

/*
For a protected member:
                            Public Derivation      Private Derivation      Protected Derivation
    1. Private Member         Not Inherited          Not Inherited            Not Inherited
    2. Protected Member       Protected              Private                  Protected
    3. Public Member          Public                 Private                  Protected
*/


class Derived : protected Base {

};

int main() {
    Base b;
    // cout << b.a;    // will receive an error ('int Base::a’ is protected within this context)
    Derived d;
    // d.b;         // same error here 

    // They both didn't worked since a and b are protected in both base and derived class
    return 0;
}