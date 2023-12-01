#include <iostream>
#include <list>
#include <string>

using namespace std;

class Producto
{
    private:
        int id_;
        string nombre_;
    
    public:
        Producto(int id, string nombre)
        {
            id_ = id;
            nombre_ = nombre;
        }
        int GetId(){return id_;}

};


int main()
{
    list<int> lista = {0,1,2,3,4,5,6,7,8,9,103};
    list<int>::iterator it = lista.begin();

    while (it != lista.end())
    {
        if (*it == 103)
        {
            cout << "Ola\n";
            break;
        }
        else it++;
    }
    cout<<"FIN\n";

    list<Producto> listaP;
    list<Producto>::iterator itP;

    Producto obj1(1, "Arena");
    Producto obj2(2, "Agua");

    listaP.push_back(obj1);
    listaP.push_back(obj2);

    itP = listaP.begin();

    while (it != listaP.end())
    {
        
    }
}