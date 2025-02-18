#include <iostream>

int main(){
    /*
        Type Conversion - Conversion of one data type to another
        1. Implicit Type Conversion - Done by the compiler
        2. Explicit Type Conversion - Done by the programmer

    */

    // Implicit Type Conversion
    int a = 10;
    char b = 'A';
    a = a + b;
    std::cout << a << std::endl; // 75

    // Explicit Type Conversion
    int c = 10;
    char d = 'A';
    c = c + (int)d;
    std::cout << c << std::endl; // 75
    

    return 0;
}