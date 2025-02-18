#include <iostream>

int main()
{
    /*
        Ternary Operator - ?: = replaces if-else statement
        condition ? expression1 : expression2
    */

    std::string hungry;
    std::cout << "Are you hungry? (yes/no):";
    std::cin >> hungry;

    hungry == "yes" ? std::cout << "Eat something" : std::cout << "Do some work";

    return 0;
}