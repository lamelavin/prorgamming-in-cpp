#include <iostream>

using namespace std;

typedef struct Employee {
    int eId;    // 4
    char favChar;   // 1
    float Salary;   // 4
} ep;



union Money {
    int rice;   // 4
    char car;   // 1
    float pounds;   // 4
};


int main() {
// *************** Structure *****************

    // struct Employee lavin;       If I use typedef then I don't have to write it like this 
    ep lavin;
    lavin.eId = 1;
    lavin.favChar = 'L';
    lavin.Salary = 120000000;
    cout<<"The value is "<<lavin.eId<<endl;
    cout<<"The value is "<<lavin.favChar<<endl;
    cout<<"The value is "<<lavin.Salary<<endl;


// ********************* Union ********************

    union Money m1;
    m1.rice = 34;
    m1.car = 'c';
    cout<<m1.rice<<endl;
    cout<<m1.car<<endl;


// ******************** Enums *********************

    enum Meal{breakfast, lunch, dinner};
    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;


    enum Status{success, error, pending};

    // Status is now a datatype
    Status s = error;

    if (s == error) {
        cout<<"We have an error"<<endl;
    }
    else if (s == success) {
        cout<<"We have success"<<endl;
    }
    else {
        cout<<"Request is still pending"<<endl;
    }

    return 0;
}

