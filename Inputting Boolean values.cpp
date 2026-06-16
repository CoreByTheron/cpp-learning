#include <iostream>

int main()
{
    bool b {};

    std::cout<<"Enter a boolean value: ";

    // allow the user to input true or false for boolean values
    // std::cout<<std::boolalpha; if did this the it will print true or false
    std::cin>>std::boolalpha;
    std::cin>>b;

    std::cout<<std::boolalpha;
    std::cout<<"You have entered: "<<b<<"\n";

    return 0;
}
