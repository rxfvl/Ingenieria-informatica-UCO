#include "market.h"
#include "client.h"
#include <iostream>

int main()
{
    Market m("Siempre tu mercado");
    Product p1("P1", "tv", 2345.9);
    std::cout << m.GetSlogan() << '\n';
    Client c1("C1"), c2("C2");
    m.AddClient(c1);
    m.AddClient(c2);
    m.AddProductClient(p1, "C1");
    std::cout << m.NClients() << '\n';
    std::cout << c1.GetSize() << '\n';
}