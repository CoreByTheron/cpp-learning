#include <iostream>

int main()
{

    std::cout<<"Enter any integer: ";
    int x{};
    std::cin>>x;

    bool zero {x==0};
    if(zero)
        std::cout<<"The value is zero.\n";

    else
        std::cout<<"The value is non zero.\n";

    return 0;
}
