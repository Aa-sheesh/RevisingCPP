#include <iostream>

int main(){
    std::string name;

    while(name.empty()){
        std::cout << "Enter your name: ";
        std::getline(std::cin,name);
    }

    return 0;
}