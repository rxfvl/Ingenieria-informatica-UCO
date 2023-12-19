#include <iostream>

template <class T>
void print_vector(T *v, const int n)
{
    for (int i = 0; i<n; i++)
    {
        std::cout << v[i] << " / ";
    }
    std::cout << '\n';
}

int main()
{
    int vInt[5] = {2,4,6,2,3};
    float vFloat[5] = {2.3,6.3,7.2,1.2,3.4};
    char vChar[6] = "Cinco";

    print_vector(vInt, 5);
    print_vector(vFloat, 5);
    print_vector(vChar, 5);
}