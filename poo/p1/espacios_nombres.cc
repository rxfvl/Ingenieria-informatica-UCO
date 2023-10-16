    // Easy example of namespaces

#include <iostream>

namespace ns1
{
    int a; // ns1::a
    int b; // ns1::b
}

namespace ns2
{
    float a; // ns2::a
    float c; // ns2::c
}

int main()
{
    int a = 55;
    ns1::a = 0;
    ns2::a = 2.3;

    std::cout << "ns1::a = " << ns1::a << '\n';
    std::cout << "ns2::a = " << ns2::a << '\n';
    std::cout << "a = " << a << '\n';
}