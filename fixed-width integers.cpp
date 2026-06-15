#include <iostream>
#include <cstdint>

int main()
{
    std::int32_t x {32767};
    //x is always a 32-bit integer
    x=x+1;
    //32768 will fit always
    std::cout<<x<<"\n";

    std::int8_t y{65};
    //initialize 8-bit integral type with the value 65
    std::cout<<y<<"\n";
    //won't get what expected

    return 0;
}
