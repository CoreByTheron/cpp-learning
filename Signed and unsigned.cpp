#include <iostream>


int main()
{
    short x {32767}; //largest 16 bit signed value possible
    std::cout<<"x was:"<<x<<"\n";

    x=32768; // out of range
    std::cout<<"x is now:"<<x<<"\n";

    x=32769; // out of range
     std::cout<<"x is now:"<<x<<"\n";

    unsigned short y {65535}; // largest 16 bit unsigned value possible
    std::cout<<"y was:"<<y<<"\n";

    y=65536; // out of range
    std::cout<<"y is now:"<<y<<"\n";

    y=65537; // out of range
    std::cout<<"y is now:"<<y<<"\n";

    unsigned short z {0}; // smallest 2 byte unsigned int

    z=-1; // out of range
     std::cout<<"z is now:"<<z<<"\n";
    return 0;
}
