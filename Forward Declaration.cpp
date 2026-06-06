#include <iostream>

using namespace std;

int add(int x, int y);
/*Forward declaration of add()
(using function declaration)
*/
//we can also write int add(int,int)

int main()
{
    cout << "The sum of 2 and 8 is " <<add(2,8)<<"\n";
    //This works because we forward declared add() above
    return 0;
}

int add(int x, int y)
{
    return x+y;
}
