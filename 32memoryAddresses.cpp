#include <iostream>

int main(){
    /*
        memory address= a location in memory where data is stored
        a memory address can be accessed using the &(address-of) operator
    */

    std::string name="Aashish";
    int age=21;
    bool student=true;

    std::cout<<&name<<std::endl;
    std::cout<<&age<<std::endl;
    std::cout<<&student<<std::endl;

    return 0;
}