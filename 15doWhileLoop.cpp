#include <iostream>

int main()
{
    int num;
    do
    {
        std::cout << "Enter a number: ";
        std::cin >> num;
    } while (num <= 0);

    return 0;
}