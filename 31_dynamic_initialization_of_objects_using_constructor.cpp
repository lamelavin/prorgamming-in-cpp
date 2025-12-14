#include <iostream>
using namespace std;


class BankDeposit {
    private:
        int principal;
        int years;
        float interestRate;
        float returnValue;
    
    public:
        BankDeposit();
        BankDeposit(int, int, float);
        BankDeposit(int, int, int);
        void show(void);
        ~BankDeposit();
};

BankDeposit :: BankDeposit() { 
    //cout << "Bank Deposit initialized" << endl; 
}

BankDeposit :: BankDeposit(int p, int y, float r) {
    principal = p;
    years = y;
    interestRate = r;
    returnValue = principal;
    for (int i = 0; i < y; i++) {
        returnValue *= (1+interestRate);
    }
}

BankDeposit :: BankDeposit(int p, int y, int r) {
    principal = p;
    years = y;
    interestRate = (float(r) / 100);
    returnValue = principal;
    for (int i = 0; i < y; i++) {
        returnValue *= (1+interestRate);
    }
}

void BankDeposit :: show(void) {
    cout << "Principal amount was " << principal
        << ". Return value after " << years
        << " years is " << returnValue
        << endl;
}

BankDeposit :: ~BankDeposit() {
    //cout << "Bank Deposit destroyed" << endl;
}

int main(void) {
    BankDeposit bd1, bd2, bd3;
    int p, y;
    int R;          // rate in int (4)
    float r;        // rate in float (0.04)
    
    cout << "Enter the value of p, y, and r " << endl;
    cin >> p >> y >> r;
    bd1 = BankDeposit(p, y, r);
    bd1.show();
    cout << endl << endl;
    cout <<"Enter the vlaue of p, y, and R " << endl;
    cin >> p >> y >> R;
    bd2 = BankDeposit(p, y, R);
    bd2.show();
    return 0;
}
