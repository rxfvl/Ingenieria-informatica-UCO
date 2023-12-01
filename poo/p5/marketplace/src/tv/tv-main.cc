#include <iostream>
#include "tv.h"

int main()
{
    Tv obj1("XX1");
    Tv obj2("XX2", "SamsungV3", 350.00, "Samsung", "Manolo", 32.5);
    float inch;

    std::cout << obj1.GetId() << '\n';
    std::cout << obj1.GetName() << '\n';
    std::cout << obj1.GetPrice() << '\n';
    std::cout << obj1.GetMaker() << '\n';
    std::cout << obj1.GetSeller() << '\n';
    std::cout << "Cuantas pulgadas tiene tv1?\n";
    std::cin >> inch;
    if (obj1.SetInch(inch) == false)
    {
        std::cout << "Valor menor que 0\n";
    }

    std::cout << obj1.GetInch() << '\n';
    std::cout << obj2.GetId() << '\n';
    std::cout << obj2.GetName() << '\n';
    std::cout << obj2.GetPrice() << '\n';
    std::cout << obj2.GetMaker() << '\n';
    std::cout << obj2.GetSeller() << '\n';
    std::cout << obj2.GetInch() << '\n';
    
}