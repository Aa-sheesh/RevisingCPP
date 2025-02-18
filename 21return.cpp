#include <iostream>

// Function declaration
double area(int length, int breadth);

int main(){
    int length = 10;
    int breadth = 5;
    double a = area(length, breadth);
    std::cout << "Area of rectangle: " << a << std::endl;
    
    return 0;
}

// Function definition
double area(int length, int breadth){
    return length * breadth;
}