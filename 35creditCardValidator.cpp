#include <iostream>
int getDigit(const int n);
int sumOddDigits(const std::string cardNumber);
int sumEvenDigits(const std::string cardNumber);
int main()
{
    /**/
    std::string cardNumber;
    int result = 0;
    std::cout << "Enter the card number: ";
    std::cin >> cardNumber;
    result = sumOddDigits(cardNumber) + sumEvenDigits(cardNumber);
    if (result % 10 == 0)
    {
        std::cout << "Valid card number\n";
    }
    else
    {
        std::cout << "Invalid card number\n";
    }
    return 0;
}
int getDigit(const int n)
{
    return n % 10 + (n / 10 % 10);
}
int sumOddDigits(const std::string cardNumber) {
    int sum=0;
    for(int i=cardNumber.length()-1;i>=0;i-=2){
        sum+=getDigit(cardNumber[i]);
    }
}
int sumEvenDigits(const std::string cardNumber)
{
    int sum = 0;
    for (int i = cardNumber.length() - 2; i >= 0; i -= 2)
    {
        sum += getDigit((cardNumber[i]-'0')*2);
    }
    return sum;
}