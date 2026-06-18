#include <iostream>
#include <cstdint>

void print(int x)
{
    std::cout<<x<<'\n';
}
int main()
{
    print(static_cast<int>(4.2));

    char ch{97}; // 97 is ASCII code for 'a'
    std::cout<<ch<<" has value "<<static_cast<int>(ch)<<'\n';

    int s{-1};
    std::cout<<static_cast<unsigned int>(s)<<'\n';
    unsigned int u{4294967295};
    std::cout<<static_cast<int>(u)<<'\n';

    std::int8_t myInt{65};
    std::cout<<static_cast<int>(myInt)<<'\n';

    return 0;
}
