#include <iostream>

using namespace std;

// This is basic syntax
int main() {
    std::cout<<"Hello World";
    int a = 5, b = 3;       // int is just a datatype and 'a' is variable name (it can be anything but meaningful. Variable name should start from any letter in alphabet or a underscore, it should not start from a number or a special character). 
    
    cout<<"The value of a is "<<a<<" and the value of b is "<<b;
    return 0;
}



// ************************* What are Comments **********************

// Comments are ignored by the compiler. They exist only to help us (programmer)
// understand the code, explain logic, and make future maintenance easier.

// This is a single line comment:

// This is a single line comment I can write anything in this line and compiler will ignore it.

/*
    This is a multi line comment.
    I can use it when explantion spans multiple lines.
*/



// *********************** Additional Information *************************

/*
    We must specify a datatype before declaring a variable.

    Basic datatypes you actually need to understand:

    1. int  
       - Stores whole numbers (positive, negative, zero).
       - Range depends on the system, but typically: -2,147,483,648 to 2,147,483,647 (32-bit).
       - If you don't know the exact range, just remember: it's a 4-byte integer on most systems.

    2. char  
       - Stores a single character inside single quotes: 'A', '9', '%'.
       - Internally it's stored as an integer (ASCII value).
       - Example: char favorite_alphabet = 'L';

    3. float  
       - Stores decimal values with ~6–7 digits of precision.
       - Example: 3.14f
       - The 'f' is required to force a float literal.
       - Without 'f', the compiler treats it as double.

    4. double  
       - A bigger version of float with ~15 digits precision.
       - You do NOT need to write any suffix; decimals default to double already.

    5. long  
       - "long" by itself is almost useless because it's system-dependent.
       - Real types you should know:
              long int
              long long int   (usually 8 bytes)
       - Use long long when you want really big integers.

    6. bool  
       - Holds only true or false.
       - In C++:
             true  → stored as 1
             false → stored as 0
*/
