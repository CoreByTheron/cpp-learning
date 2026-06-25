#include <iostream>

double uInput()
{
    std::cout<<"Enter a double value: ";
    double value{};
    std::cin>>value;

    return value;
}

double uCalc(double value1, double value2)
{
    std::cout<<"Enter +,-,* or /: ";
    char sign{};
    std::cin>>sign;

    double result{};
    if (sign=='+')
        result = value1 + value2;

    else if (sign=='-')
        result = value1 - value2;

    else if (sign=='*')
        result = value1 * value2;

    else (sign== '/')
        result = value1 / value2;

    return result;

}

void uOutput(double result)
{
    std::cout<<"The calculated value is= "<<result<<'\n';
}

int main()
{
    double value1{uInput()};
    double value2{uInput()};
    double result{uCalc(value1, value2)};
    uOutput(result);

    return 0;
}
