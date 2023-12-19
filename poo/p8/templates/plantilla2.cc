#include <iostream>

template <class T> class MiClase
{
    private:
        T x_, y_;

    public:
        MiClase (T a, T b) {x_ = a; y_ = b;}
        T Div() {return x_/y_;}
};

int main()
{
    MiClase <int> obj1(10,5);
    MiClase <float> obj2(5.0, 2);

    std::cout << "--- DIV ENTERA ---\n" << obj1.Div() << '\n';
    std::cout << "--- DIV FLOTANTE ---\n" << obj2.Div() << '\n';
}