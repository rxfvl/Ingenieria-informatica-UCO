#include <algorithm>
#include <iostream>
#include <vector>

bool compara (int i, int j)
{
    return i<j;
}

int main()
{
    int nEle, n;
    std::vector<int> v;
    std::cout << "Dime la dimension del vector\n";
    std::cin >> nEle;
    
    std::cout << "Dime los elementos del vector\n";
    for (int i=0; i<nEle; i++)
    {
        std::cout << "-> ";
        std::cin >> n;
        v.push_back(n);
    }

    std::cout << "--- VECTOR SIN ORDENAR ---\n";
    for (auto it = v.begin(); it != v.end(); ++it)
    {
        std::cout << *it << " ";
    }

    std::cout << "\n--- VECTOR ORDENADO ---\n";
    std::sort(v.begin(), v.end());
    for (auto it = v.begin(); it != v.end(); ++it)
    {
        std::cout << *it << " ";
    }

    std::cout << "\n";
}
