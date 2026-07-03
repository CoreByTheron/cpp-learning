#include <iostream>
#include <string>

std::string nameInput()
{
    std::cout<<"Enter your name: ";
    std::string name{};
    std::getline(std::cin>> std::ws, name);

    return name;
}

int ageInput()
{
    std::cout<<"Enter your age: ";
    int age{};
    std::cin>>age;

    return age;
}

int sum(int nameLenght, int age)
{
    int total = age + nameLenght;

    return total;
}

int main()
{
    int totalSum {sum(std::ssize(nameInput()), ageInput())};
    std::cout<<"The sum of age + length of your name is: "<<totalSum<<'\n';

    return 0;
}
