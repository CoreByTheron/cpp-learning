#include <iostream>

using namespace std;

int getvaluefromuser()
{
    int input{};

    cout<<"Enter any number= ";
    cin>>input;

    return input; //Returns a value entered by the user
}

int main()
{
    int num{getvaluefromuser()};
    cout<<"Double of the number "<<num<<" is "<<num*2;
    return 0;
}
