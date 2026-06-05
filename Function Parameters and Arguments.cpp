#include <iostream>

using namespace std;

int getValueFromUser()
{
    int input{};
    cout<<"Enter any number = ";
    cin>>input;

    return input;
}

void printDouble(int num)
{
    cout<<"Double of "<<num<<" is "<<num*2;
}

int main()
{
    int value{getValueFromUser()};
    printDouble(value);
    return 0;
}
