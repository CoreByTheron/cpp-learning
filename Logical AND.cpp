#include <iostream>

int main()
{
    std::cout<<"Enter any number: ";
    int value{};
    std::cin>>value;

    if (value>10 && value<20)
        std::cout<<"Your chosen number is between 10 and 20.\n";

    else
        std::cout<<"Your chosen number is not between 10 and 20.\n";

    return 0;
}
