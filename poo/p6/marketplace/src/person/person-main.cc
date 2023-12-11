#include "person.h"
#include <iostream>

int main()
{
    Person p1("26794424E");
    Person p2("25323750Z", "Rafael Tortosa", "Antequera", "Malaga", "Espania", 54, 7.5, 2004);

    std::cout << p1.GetDataStr() << '\n';
    std::cout << p2.GetDataStr() << '\n';
}