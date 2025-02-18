#include <iostream>

//cout - extraction operator
//cin - insertion operator

int main(){
    std::string name;

    std::cout<<"Enter your name:";
    // std::cin>>name; //cin stops reading when it encounters a whitespace
    std::getline(std::cin, name); //getline reads the entire line
    std::cout<<"Hello "<<name<<std::endl;

    int age;
    std::cout<<"Enter your age:";
    std::cin>>age;
    std::cout<<"You are "<<age<<" years old."<<std::endl;
    

    return 0;
}