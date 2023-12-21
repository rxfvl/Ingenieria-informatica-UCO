#include "market.h"
#include "client.h"
#include <iostream>

int main()
{
    Market m("Siempre tu mercado");
    std::cout << m.GetSlogan() << '\n';
}