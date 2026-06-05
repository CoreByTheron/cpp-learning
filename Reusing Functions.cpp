#include <iostream>

using namespace std;

int getvaluefromuser()
{
    int input{};
    cout<<"Enter any number= ";
    cin>>input;

    return input;
}
int main()
{
    int x{getvaluefromuser()};
    int y{getvaluefromuser()};

    cout<<x<<" + "<<y<<" = "<<x+y;
    return 0;
}
