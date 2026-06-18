#include <iostream>

char uInput()
{
    std::cout<<"Enter any single character= ";
    char input{};
    std::cin>>input;

    return input;

}

void print(char x)
{
    std::cout<<"You entered \'"<<x<<"\' and its ASCII code is "<<static_cast<int>(x)<<".\n";
}
int main()
{
    print(uInput());

    return 0;
}
