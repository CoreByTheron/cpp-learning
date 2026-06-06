#include <iostream>

using namespace std;

int getInteger();

int main()
{
    int x{getInteger()};
    int y {getInteger()};

    cout <<"The multiple of "<<x<<" and "<<y<<" is "
    <<x*y;

    return 0;
}
