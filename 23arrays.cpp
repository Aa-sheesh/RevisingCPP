#include <iostream>

int main(){
    /*
        array= a data structure that can hold multiple values.
            values are accessed by an index number.
            "kind of like a variable that holde multiple values"
    */

    std::string car[]={
        "Ford",
        "Chevy",
        "Toyota",
        "Nissan"
    };
    std::cout<<car<<"\n";//prints the memory address of the array
    std::cout<<car[0];//prints the first element of the array
    car[0]="Honda";//changes the first element of the array
    std::cout<<car[0];//prints the first element of the array


    return 0;
}