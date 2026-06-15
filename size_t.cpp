#include <iostream>
#include <cstddef> // for std::size_t

int main()
{
    int x {5};
    std::size_t s {sizeof(x)};

    std::cout<<s<<"\n";

    std::cout<<sizeof(std::size_t)<<"\n";
    // if this runs in 32 bit system then it prints 4, as it is in 64 bit one so it gives 8
    return 0;
}
