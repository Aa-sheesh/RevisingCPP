#include <iostream>

int main(){
    /*
        sizeof() = determines the size in bytes of a: variable, data type, class, objects, etc
    */
    int x=1;
    long int y=2;
    char z='a';
    float pi=3.14;
    double gpa=2.5;
    std::string name="Aashish";
    char grades[]={'A','B','C','D','F'};

    std::cout<<"Size of int: "<<sizeof(x)<<" bytes"<<std::endl;
    std::cout<<"Size of long int: "<<sizeof(y)<<" bytes"<<std::endl;
    std::cout<<"Size of char: "<<sizeof(z)<<" bytes"<<std::endl;
    std::cout<<"Size of float: "<<sizeof(pi)<<" bytes"<<std::endl;
    std::cout<<"Size of double: "<<sizeof(gpa)<<" bytes"<<std::endl;
    std::cout<<"Size of string: "<<sizeof(name)<<" bytes"<<std::endl;
    std::cout<<"Size of char array: "<<sizeof(grades)<<" bytes"<<std::endl;


    return 0;
}