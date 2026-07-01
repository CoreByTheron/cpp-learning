#include <iostream>

int five()
{
    return 5;
}

int max(int x, int y)
{
    if(x>y)
        return x;
    else
        return y;
}

constexpr int cmax (int x, int y)
{
    if(x>y)
        return x;
    else
        return y;
}

int main()
{
    constexpr double gravity {9.8};
    constexpr int sum {5+6};
    constexpr int something {sum};

    constexpr int f {five()}; //return value of five is not a constant expression

    std::cout<<"Enter your age: ";
    int age{};
    std::cin>>age;
    constexpr int myAge {age}; //age is not a constant expression

    int m1 {max(6,7)}; // Ok
    const int m2 {max(5,6)}; // Ok
    constexpr int m3 {max(5,6)}; // error as max is not a constant expression

    int m4 {cmax(5,6)}; // ok: may evaluate at runtime or compile time
    const m5 {cmax(5,6)}; // ok: may evaluate at runtime or compile time
    constexpr m6 {cmax(4,6)}; // must evalusate at compile time

    return 0;
}
