#include <iostream>

int userInput()
{
    std::cout<<"Enter any integer: ";
    int num{};
    std::cin>>num;

    return num;
}

constexpr bool isEven(int num)
{
    if( num%2 == 0 )
        return true;
    else
        return false;
}

void output(bool isEvenNumber, int num)
{
    if (isEvenNumber)
        std::cout<<num<<" is even.\n";
    else
        std::cout<<num<<" is odd.\n";
}

int main()
{
    int number {userInput()};
    bool isEvenNumber{isEven(number)};
    output(isEvenNumber, number);

    return 0;
}
