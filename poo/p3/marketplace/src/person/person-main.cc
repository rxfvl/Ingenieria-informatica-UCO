#include "person.h"
#include <iostream>

int main()
{
    Person p1("65345673C");
    Person p2("78234912J", "Rafael Tortosa", "Antequera", "Malaga", "Espania", 54, 7.5, 2004);

    std::cout << p1.GetDataStr() << '\n';
    std::cout << p2.GetDataStr() << '\n';
}