#include <algorithm>
#include <iostream>
#include <vector>

bool compara (int i, int j)
{
    return i>j;
}

int main()
{
    int nEle, n, sortmode;
    std::vector<int> v;
    std::cout << "Dime la dimension del vector\n";
    std::cin >> nEle;
    
    std::cout << "Dime el modo de ordenar (0->Ascendente / 1->Descendente)\n";
    std::cin >> sortmode;
    if (sortmode != 0 and sortmode != 1) return -1;


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
    
    if (sortmode == 0)
    {
        std::sort(v.begin(), v.end());
    }

    else
    {
        std::sort(v.begin(), v.end(), &compara);
    }

    std::cout << "\n--- VECTOR ORDENADO ---\n";

    for (auto it = v.begin(); it != v.end(); ++it)
    {
        std::cout << *it << " ";
    }

    std::cout << "\n";
}
