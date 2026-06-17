#include <iostream>


bool isPrime(int x)
{
    if (x==2)
        return true;
    else if (x==3)
        return true;
    else if (x==5)
        return true;
    else if (x==7)
        return true;
    else if (x==9)
        return true;
    else
        return false;
}

int main()
{
    std::cout<<"Enter any no between 1 and 10: ";
    int x {};
    std::cin>>x;

    if (isPrime(x))
        std::cout<<"The value is prime.\n";

    else
        std::cout<<"The value is not prime.\n";

    return 0;
}
