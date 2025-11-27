#include <iostream>

using namespace std;

// using recursion
int factorial(int n) {
    if  (n <= 1) {
        return 1;
    }
    return n * factorial(n-1);
}

int main() {
/*
// normal factorial program 
    // factorial of a number :
    int num = 6;        // 6! = 6*5*4*3*2*1 = 720
    int sum = 1;

    while(num!=1) {
        sum *= num;
        num--;
    }
*/

// ************ using recursion ************
    cout<<factorial(6)<<endl;
    return 0;
}