#include <iostream>

void swapByValue(int a, int b);
void swapByReference(int &a, int &b);

int main(){
    // Pass by value - the value of the variable is copied to the function (meaning when we call function and pass the parameters to it, a copy of the parameter is made and passed to the function and the original parameter remains unchanged)
    // Pass by reference - the address of the variable is passed to the function (meaning when we call function and pass the parameters to it, the address of the parameter is passed to the function and the original parameter can be changed)

    // Pass by value
    int a = 10;
    int b = 20;
    std::cout << "Before swapping: a = " << a << " b = " << b << std::endl;
    swapByValue(a, b);
    std::cout << "After swapping: a = " << a << " b = " << b << std::endl;

    // Pass by reference
    swapByReference(a, b);
    std::cout << "After swapping by reference: a = " << a << " b = " << b << std::endl;

    return 0;
}

void swapByValue(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}

void swapByReference(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}