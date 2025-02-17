#include <iostream>

int main(){
    const double PI =3.14;
    // pi=3.15; // This is allowed without const keyword
    double radius=10;
    double circumference=2*PI*radius;

    std::cout<<"Circumference of the circle is: "<<circumference<<std::endl;


    return 0;
}