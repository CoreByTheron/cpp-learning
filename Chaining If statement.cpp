#include <iostream>

int main()
{
    std::cout<<"Enter any integer: ";
    int x{};
    std::cin>>x;

    if (x>0)
        std::cout<<"The value is positive.";

    else if (x<0)
        std::cout<<"The value is negative.";

    else
        std::cout<<"The value is zero.";

    return 0;
}
