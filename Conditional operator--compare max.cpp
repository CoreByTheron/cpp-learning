#include <iostream>

int userInput()
{
    std::cout<<"Enter any integer: ";
    int x{};
    std::cin>>x;

    return x;
}

int main()
{
    int x{userInput()};
    int y{userInput()};

    int maximum {((x>y)?x:y)};

    std::cout<<"The max between "<<x<<" and "<<y<<" is: "<<maximum<<'\n';

    return 0;
}
