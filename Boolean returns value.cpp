#include <iostream>

bool isEqual(int x,int y)
{
    return x==y;
}

int main()
{
    std::cout<<"Enter any number: ";
    int x{};
    std::cin>>x;

    std::cout<<"Enter any number: ";
    int y{};
    std::cin>>y;

    std::cout<<std::boolalpha;
        std::cout<<x<<" is equal to "<<y<<"\n";
        std::cout<<isEqual(x,y);

    return 0;
}
