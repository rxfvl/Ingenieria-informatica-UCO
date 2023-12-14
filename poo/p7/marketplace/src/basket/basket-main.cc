#include "basket.h"
#include "product.h"
#include <iostream>


int main()
{
    Product p1("XX1", "Limpiacristales", 10, "Product SA", "Manolo");
    Product p2("XX2", "Friegasuelos", 5.50, "Product SA", "Manolo");

    Basket cesta;

    cesta.AddProduct(p1);
    cesta.AddProduct(p2);

    std::cout << "Size: " << cesta.GetSize() << std::endl;
    std::cout << "Total " << cesta.GetTotal() << std::endl;

    cesta.DeleteProduct(p1);
    std::cout << "Size: " << cesta.GetSize() << std::endl;
    std::cout << "Total " << cesta.GetTotal() << std::endl;

    cesta.DeleteProduct("XX2");
    std::cout << "Size: " << cesta.GetSize() << std::endl;
    std::cout << "Total " << cesta.GetTotal() << std::endl;

}