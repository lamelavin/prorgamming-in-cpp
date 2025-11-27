#include <iostream>

using namespace std;

/*
    Loops in C++:
    There are 3 types of loops in C++:
        1. For loop
        2. While loop
        3. Do-While loop
*/

int main() {
/*
    syntax of for loop

    for (initialization; condition; updation) {
        // code here
    }
*/
    cout<<endl<<"Running for loop"<<endl;
    
    for (int i = 0; i < 10; i++) {
        cout<<i+1<<endl;
    }

    cout<<endl<<"Running while loop"<<endl;

/*
    syntax of while loop

    while (condition) {
        // code here
    }
*/
    int i = 0;
    while (i < 10) {
        i++;
        cout<<"i is smaller than 10. currently i is: "<<i<<endl;
    }

    i = 0;
    cout<<endl<<"Running do while loop"<<endl;
    
/*
    syntax of do while loop

    do {
        code here
    } while (condition);
*/
    do {
        i++;
        cout<<"i is smaller than 10. currently i is: "<<i<<endl;
    } while (i < 10);
    return 0;
}