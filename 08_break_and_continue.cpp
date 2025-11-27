#include <iostream>

using namespace std;

int main() {
    for (int i = 0; i < 5; i++)
    {
        /* code */
        if (i == 2) {
            cout<<"Skipping through "<<i<<endl;
            continue;       // skips the iteration
        }
        
        if (i == 4) {
            cout<<"Breaking i at "<<i<<endl;
            break;          // breaks the loop
        }
        cout<<i<<endl;

    }
    
    return 0;
}   