#include <iostream>

int main()
{
    std::string name;
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    // if (name.length() > 5)
    // {
    //     std::cout << "Your name is long enough!" << std::endl;
    // }
    // else if (name.empty())
    // {
    //     std::cout << "You didn't enter a name!" << std::endl;
    // }
    // else
    // {
    //     std::cout << "Your name is too short!" << std::endl;
    // }

    // name.clear();
    // std::cout<<"CLEARED OUT NAME:"<<name;

    // name.append(" is a software developer");
    // std::cout << name << std::endl;

    // std::cout<<name.at(1);
    // std::cout<<name.insert(0,"@");
    
    // int index = name.find(' ');
    // std::cout<<index;
    // name.erase(index, 1);
    // std::cout << name.append(0,'@');

    return 0;
}