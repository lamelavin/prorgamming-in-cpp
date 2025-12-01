// prev code summary -->

// C++ --> initially called --> C with classes by "stroustroup"
// class --> extention of structure (in C)
// Structure had limitations
//          - members are public
//          - no methods
// classes --> structure + more
// classes --> can have methods and properties
// classes --> can make few members as private & few as public
// structures in C++ are typedefed
// you can declare objects along with the class declartion
/*
    class Employee {
        //class definiion
    } obj1, obj2, obj3, objn;
*/
// obj1.salary = 9; makes no sense if salary is private


// new code -->
#include <iostream>
#include <string>

using namespace std;

class Binary {
    string s;
    void chk_bin(void);     // private helper --> only class uses it

public:
    void read(void);
    void ones_compliment(void);
    void display(void);
};

void Binary::read(void) {
    cout<<"Enter a binary number: ";
    cin>>s;

    chk_bin();       // NESTED CALLL : read() --> chk_bin()
}

void Binary::chk_bin(void) {
    for (int i = 0; i < s.length(); i++) {
        if (s.at(i) != '0' && s.at(i) != '1') {
            cout<<"Incorrect Binary format"<<endl;
            exit(0);
        }
    }
}

void Binary::ones_compliment(void) {
    chk_bin
 ();            // I can also call function like this
    for (int i = 0; i < s.length(); i++) {
        if (s.at(i) == '0') {
            s.at(i) = '1';
        }
        else if (s.at(i) == '1') {
            s.at(i) = '0';
        }
    }
}

void Binary::display(void) {
    cout<<"Displaying your binary output:"<<endl;
    for (int i = 0; i < s.length(); i++) {
        cout<<s.at(i);
    }
    cout<<endl;
}

int main() {
// ****************************** Nesting of Member Function ********************************
    Binary b;
    b.read();       // internally calls chk_bin()
    b.display();
    b.ones_compliment();        //  internally calls chk_bin()
    b.display();
    return 0;
}
