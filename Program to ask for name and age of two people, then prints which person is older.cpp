#include <iostream>
#include <string>
#include <string_view>

std::string nameInput(int no)
{
    std::cout<<"Enter the name of person #"<<no<<": ";
    std::string name{};
    std::getline(std::cin>> std::ws, name);

    return name;
}

int ageInput(std::string_view name)
{
    std::cout<<"Enter the age of "<<name<<": ";
    int age{};
    std::cin>>age;

    return age;
}

void printOlder(std::string_view name1, int age, std::string_view name2, int age)
{
     if(age1<age2)
        std::cout<<name2<<"("<<age2<<")"<<" is older than "<<name1<<"("<<age1<<").\n";
    else
        std::cout<<name1<<"("<<age1<<")"<<" is older than "<<name2<<"("<<age2<<").\n";

}

int main()
{
    std::string name1{nameInput(1)};
    int age1{ageInput(name1)};

    std::string name2{nameInput(2)};
    int age2{ageInput(name2)};

    printOlder(name1, age1, name2, age2);

    return 0;
}
