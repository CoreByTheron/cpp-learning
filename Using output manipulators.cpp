#include <iostream>
#include <iomanip> // for output manipulator std::setprecision()

int main()
{
    std::cout<<std::setprecision(10); // show 10 digits of precision

    std::cout<<3.3333333333333333333333333333333333f<<"\n"; // f suffix means float
    std::cout<<3.3333333333333333333333333333333333<<"\n"; // no f suffix means double

    float f {123456789.0f};
    std::cout<<f<<"\n";

    double d {0.1};
    std::cout<<d<<"\n"; // default cout precision of 6
    std::cout<<std::setprecision(17);
    std::cout<<d<<"\n";

    return 0;
}
