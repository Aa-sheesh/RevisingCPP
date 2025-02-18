#include <iostream>

int main()
{
    /*
        switch statement = do something depending on the value of a variable
    */
    int month;
    std::cout << "Enter a number between 1 and 12: ";
    std::cin >> month;

    switch (month)
    {
    case 1:
        std::cout << "January" << std::endl;
        break;
    case 2:
        std::cout << "February" << std::endl;
        break;
    case 3:
        std::cout << "March" << std::endl;
        break;
    case 4:
        std::cout << "April" << std::endl;
        break;
    case 5:
        std::cout << "May" << std::endl;
        break;
    case 6:
        std::cout << "June" << std::endl;
        break;
    case 7:
        std::cout << "July" << std::endl;
        break;
    case 8:
        std::cout << "August" << std::endl;
        break;
    case 9:
        std::cout << "September" << std::endl;
        break;
    case 10:
        std::cout << "October" << std::endl;
        break;
    case 11:
        std::cout << "November" << std::endl;
        break;
    case 12:
        std::cout << "December" << std::endl;
        break;
    default:
        std::cout << "Invalid month" << std::endl;
    }

    return 0;
}