#include <iostream>

void rec()
{
    rec();
    std::cout << "Hola ";
}

int main()
{
    rec();
}