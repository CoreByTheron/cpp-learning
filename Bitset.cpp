#include <iostream>
#include <bitset>

int main()
{
    // std::bitset<8> means we want to store 8 bits
    std::bitset<8>bits{0b0000'0101};

    bits.set(3); //set bit position 3 to 1
    bits.flip(4); //flip bit 4
    bits.reset(4); //set bit 4 back to 0

    std::cout<<"All the bits: "<<bits<<'\n';
    std::cout<<"Bit 3 has value: "<<bits.test(3)<<'\n';
    std::cout<<"Bit 4 has value: "<<bits.test(4)<<'\n';

    std::cout<<"\n \n";
    std::bitset<8> bits1{0b0000'0101};
    std::cout<<bits1.size()<<" bits are in the bitset.\n";
    std::cout<<bits1.count()<<" bits are set to true.\n";

    std::cout<<std::boolalpha;
    std::cout<<"All bits are true: "<<bits1.all()<<'\n';
    std::cout<<"Some bits are true: "<<bits1.any()<<'\n';
    std::cout<<"No bits are true: "<<bits1.none()<<'\n';

    return 0;
}
