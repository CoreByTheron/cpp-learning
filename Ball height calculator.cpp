#include <iostream>

int getTowerHeight()
{
    std::cout<<"Enter the height of the towers in meters: ";
    int height{};
    std::cin>>height;

    return height;
}

double calculateBallHeight(int sec, int height)
{
    double gravity{9.8};
    double fallDistance{};
    fallDistance = gravity*(sec*sec)/2.0 ;

    double ballHeight{height-fallDistance};

    if (ballHeight<0.0)
        return 0.0;

    return ballHeight;
}

void printHeight(double ballHeight, int sec)
{
    if (ballHeight>0.0)
        std::cout<<"At "<<sec<<" second, the ball is at height= "<<ballHeight<<'\n';

    else
        std::cout<<"At "<<sec<<" second, the ball is at ground."<<'\n';
}

int main()
{
    int towerHeight{getTowerHeight()};
    printHeight(calculateBallHeight(0, towerHeight), 0);
    printHeight(calculateBallHeight(1, towerHeight), 1);
    printHeight(calculateBallHeight(2, towerHeight), 2);
    printHeight(calculateBallHeight(3, towerHeight), 3);
    printHeight(calculateBallHeight(4, towerHeight), 4);
    printHeight(calculateBallHeight(5, towerHeight), 5);

    return 0;
}
