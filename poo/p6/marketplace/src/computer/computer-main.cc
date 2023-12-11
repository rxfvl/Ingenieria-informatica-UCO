#include "computer.h"
#include <iostream>


int main()
{
    Computer obj1("XX1", ComputerType::Laptop);
    Computer obj2("XX2", ComputerType::Gaming, "MSI GF63", 750.00, "MSI", "Manolo");
    ComputerType type = obj1.GetType();


    std::cout << obj1.GetId() << '\n';
    std::cout << obj1.GetName() << '\n';
    std::cout << obj1.GetPrice() << '\n';
    std::cout << obj1.GetMaker() << '\n';
    std::cout << obj1.GetSeller() << '\n';

    switch (type)
    {
        case ComputerType::Desktop:
            std::cout << "Desktop\n";
            break;

        case ComputerType::Laptop:
            std::cout <<"Laptop\n";
            break;

        case ComputerType::Server:
            std::cout <<"Server\n";
            break;

        case ComputerType::Gaming:
            std::cout <<"Gaming\n";
            break;
        
        case ComputerType::Tablet:
            std::cout <<"Tablet\n";
            break;
    }

    std::cout << obj2.GetId() << '\n';
    std::cout << obj2.GetName() << '\n';
    std::cout << obj2.GetPrice() << '\n';
    std::cout << obj2.GetMaker() << '\n';
    std::cout << obj2.GetSeller() << '\n';
}