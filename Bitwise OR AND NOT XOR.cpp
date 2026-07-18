#include <iostream>
#include <bitset>

int main()
{
    std::bitset<4> x{0b0101};
    x=~x; //bitwise NOT
    std::cout<<x<<'\n';

    std::cout<<"\n\n";
    //bitwise OR
    std::cout<<(std::bitset<4>{0b0101}|std::bitset<4>{0b0110})<<'\n';

    std::cout<<"\n\n";
    //bitwise AND
    std::cout<<(std::bitset<4>{0b0101}&std::bitset<4>{0b0110})<<'\n';

    std::cout<<"\n\n";
    //bitwise XOR
    std::cout<<(std::bitset<4>{0b0101}^std::bitset<4>{0b0110})<<'\n';

    return 0;
}
