#include <iostream>

std::string happyBirthday(std::string name){
    std::cout<<"Happy Birthday "<<name<<"!"<<std::endl;
}


int main(){
    std::string name;
    std::cout<<"Enter your name: ";
    std::cin>>name;
    happyBirthday(name);

    return 0;
}