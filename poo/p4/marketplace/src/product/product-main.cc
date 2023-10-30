#include "product.h"
#include <iostream>

int main()
{
    Product p1("XX1");
    Product p2("XX2", "Friegasuelos", 5.50, "Product SA", "Manolo");

    std::cout << p1.GetId() << '\n';
    std::cout << p1.GetName() << '\n';
    std::cout << p1.GetPrice() << '\n';
    std::cout << p1.GetMaker() << '\n';
    std::cout << p1.GetSeller() << '\n';
    std::cout << p2.GetId() << '\n';
    std::cout << p2.GetName() << '\n';
    std::cout << p2.GetPrice() << '\n';
    std::cout << p2.GetMaker() << '\n';
    std::cout << p2.GetSeller() << '\n';
}