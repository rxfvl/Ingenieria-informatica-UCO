#include "client.h"

int main()
{
    Client cliente("XX1", "Fede",  "Antequera", "Malaga", "España", 9, 4.5, 1998, 1);

    std::cout << cliente.GetPremium() << std::endl;
    cliente.SetPremium(0);
    std::cout << cliente.GetPremium() << std::endl;
}