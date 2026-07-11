#include <iostream>

int main()
{
    int x{4};
    int y{7};

    if (!(x>y))
        std::cout<<x<<" is not greater than "<<y<<'\n';
    else
        std::cout<<x<<" is greater than "<<y<<'\n';

    return 0;
}
