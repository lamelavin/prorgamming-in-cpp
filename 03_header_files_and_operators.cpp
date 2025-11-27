// There are two types of header files
// 1. System header files : it comes with compiler
#include <iostream>
// 2. User defined header files : it is written by the programmer
#include "this.h"      // --> This will produce an error if this.h is not present in current directory

using namespace std;

// visit cpp en.cppreference website

int main() {
    int a = 4, b = 5;
    cout<<"Operators in C++"<<endl;
    cout<<"Following are the types of operators in C++"<<endl;

    // ******************** Arithmetic operator ***************************

    cout<<"The value of a + b is "<<a + b<<endl;
    cout<<"The value of a - b is "<<a - b<<endl;
    cout<<"The value of a / b is "<<a / b<<endl;
    cout<<"The value of a * b is "<<a * b<<endl;
    cout<<"The value of a % b is "<<a % b<<endl;        // this is modulo operator.
    /*
        Modulo operator in detail:

        Let's say if I have 2 numbers one is 10 and other is 2.
        Now I write something like this 10 % 2          (10 modulo 2)
        What does it mean? 
        This means that What’s left over when I divide 10 by 2?.
        10 / 2 = 5 and the remainder is 0 

        Let's take another example
        17 % 3
        So 17 % 3 = 2                   (When I divide 17 from 3, I get 2 remainder. 3*5 is 15 and and 17-15 is 2)
        next step 2 % 3 = 2             (When the dividend (2) is smaller than the divisor (3), it cannot be divided even once)
        So the remainder is just the number itself.
        So the ans will be 2
    */
    cout<<"The value of a++ is "<<a++<<endl;        // post increment operator (first use then increment)
    cout<<"The value of a-- is "<<a--<<endl;        // post decrement operator (first use then decrement)
    cout<<"The value of ++a is "<<++a<<endl;        // pre increment operator (first increment then use)
    cout<<"The value of --a is "<<--a<<endl;        // pre decrement operator (first decrement then use)
    cout<<endl;

    // assignment operator --> used to assign a value to the variable
    // int a = 9, b = 2;
    // char d = 'd';

    // ******************** Comparison Operator **********************

    cout<<"The value of a == b is "<<(a == b)<<endl;    // compares 2 values 
    cout<<"The value of a != b is "<<(a != b)<<endl;    // checks if a value is not equals to other value
    cout<<"The value of a > b is "<<(a > b)<<endl;      // checks if a value is greater than other value
    cout<<"The value of a < b is "<<(a < b)<<endl;      // checks if a value is smaller than other value
    cout<<"The value of a >= b is "<<(a >= b)<<endl;    // checks if a value is greater than or equal to other value 
    cout<<"The value of a <= b is "<<(a <= b)<<endl;    // checks is a value is smaller than or equal to other value
    cout<<endl;

    // ************************* Logical Operators ***************************
    cout<<"Following are the logical opeartors in C++"<<endl;
    cout<<"The value of this logical and opeartor ((a==b) && (a<b)) is : "<<((a==b) && (a<b))<<endl; 
    // This && operator is called and operator mean it checks if both the conditions are true or not.
    // Let's take two conditions (1 > 2) and (10 > 4).
    // We know that 1 is not greater than 2 so the first condition is false.
    // And the second condition is 10 > 4. We know 10 is greater than 4 so the second condition is true 
    // So this && (and) operator will give false result because it gives true only when both conditions are true.

    cout<<"The value of this logical or opeartor ((a==b) || (a<b)) is : "<<((a==b) || (a<b))<<endl;   
    // || (or operator) is gives true if any of the condition is true

    return 0;
}