#include <iostream>

int main()
{
    std::cout<<"Enter any number: ";
    int x{};
    std::cin>>x;

        std::cout<<"Enter any number: ";
    int y{};
    std::cin>>y;

    if (x==y)
        std::cout<<x<<" is equal to "<<y<<'\n';

    if (x!=y)
       std::cout<<x<<" is not equal to "<<y<<'\n';

    if (x<y)
        std::cout<<x<<" is smaller than "<<y<<'\n';

    if (x>y)
        std::cout<<x<<" is greater than "<<y<<'\n';

    if (x<=y)
        std::cout<<x<<" is smaller than equal to "<<y<<'\n';

    if (x>=y)
        std::cout<<x<<" is greater than equal to "<<y<<'\n';

    return 0;
}
