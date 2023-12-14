#include "seller.h"


int main()
{
    Seller seller("XX1", "Nombre", "Antequera", "Malaga", "España", 10, 9.5, 1995, "electronica");

    std::cout << seller.GetSector() << std::endl;
    seller.SetSector("informatica");
    std::cout << seller.GetSector() << std::endl;
}