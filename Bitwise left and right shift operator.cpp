#include <iostream>
#include <bitset>

int main()
{
    std::bitset<4> x {0b1100};
    std::cout<<x<<'\n';
    std::cout<<(x>>1)<<'\n';
    std::cout<<(x<<1)<<'\n';

    return 0;
}
