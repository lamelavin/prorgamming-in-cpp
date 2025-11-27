#include <iostream>
using namespace std;

/* '<<' this is called insertion operator */
/* '>>' this is called extraction operator */

int main() {
    // code here
    int num1, num2;
    // cout is used to print things on screen
    cout<<"Enter the value of num1:\n";
    // cin is used to take input from user
    cin>>num1;

    cout<<"Enter the value of num2:\n";         // \n is just used to end a line --> end current line and come in next line
    cin>>num2;

    cout<<"The sum is "<<num1+num2<<endl;       // endl is just used to end a line same as \n
    return 0;
}