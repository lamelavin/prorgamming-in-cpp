#include <iostream>

using namespace std;


/*
    Basic Control Structure:
        1. Sequence structure       (entry -> action 1 -> action 2 -> action n -> exit)
        2. Selection structure      (entry -> condition -> true/false -> exit)
        3. Loop structure           (entry -> loop -> condition -> true/false -> loop again if true/finish if false -> exit)
*/

int main() {
    int age;
    cout<<"Enter your age: ";
    cin>>age;

    // ************** Selection Control Structure ****************
    
    // *********** if-else ladder *************** 

    if (age < 18) {
        cout<<"You cannot come to my party"<<endl;
    }
    else if (age == 18) {
        cout<<"You are a kid and you will get a kid pass to the party"<<endl;
    }
    else {
        cout<<"You can come to the party"<<endl;
    }
 

    // ****************** switch-case statement *********************
    switch (age) {
        case 18:
            cout<<"You are 18"<<endl;
            break;
        case 22:
            cout<<"You are 22"<<endl;
            break;
        case 2:
            cout<<"You are 2"<<endl;
            break;
        default:
            cout<<"No special cases"<<endl;
            break;
    }
    cout<<"Done with swtich case"<<endl;

    return 0;
}