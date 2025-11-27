#include <iostream>

using namespace std;

// As usual, not writing the whole function with definition here. Just making a function prototype
int product(int, int);
inline float moneyReceived(int, float factor=1.04F);

int main() {
    int a, b;
    cout<<"Enter the value of a and b: ";
    cin>>a>>b;
    cout<<"The product of a and b is "<<product(a, b)<<endl;

    int money = 100000;
    cout<<"If you have "<<money<<" Rs in your bank account, you will receive "<<moneyReceived(money)<<" Rs after 1 year.";
    return 0;
}

inline int product(int x, int y) {
    return x * y;
}

// never use inline function with recursion, static keyword

/*
// never use 'inline' with this
int product(int x, int y) {
    static int c = 0;
    c = c + 1;
    return x * y + c;
}
*/


inline float moneyReceived(int currentMoney, float factor) {
    return currentMoney * factor;
}