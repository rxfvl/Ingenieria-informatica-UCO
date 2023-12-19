#include "contador.h"

Contador::Contador(int valor, int min, int max)
{

    min_ = min;
    max_ = max;

    if (min<max)
    {
        if (valor >= min and valor <= max)
        {
            valor_ = valor;
        }
        else
        {
            valor_ = 0;
            std::cout << "ERROR: Value surpassed limits, default value applied\n";
        }
    }

    else
    {
        min_ = 0;
        max_ = 1000;
        valor_ = 0;
        std::cout << "ERROR: Min>Max, default values applied\n";
    }
}

Contador Contador::operator=(const int n)
{
    if (n > max_)
    {
        valor_ = max_;
    }
    else if (n < min_)
    {
        valor_ = min_;
    }
    else
    {
        valor_ = n;
    }
    
    return *this;
}

Contador Contador::operator=(const Contador cont)
{
    if (cont.valor_ > max_)
    {
        valor_ = max_;
    }
    else if (cont.valor_ < min_)
    {
        valor_ = min_;
    }
    else
    {
        valor_ = cont.valor_;
    }
    
    return *this;
}

Contador Contador::operator++(int)
{
    Contador aux = *this;
    
    if (valor_ < max_)
    {
        valor_++;
    }
    return aux;
}

Contador Contador::operator++(void)
{
    if (valor_ < max_)
    {
        valor_++;
    }
    return *this;
}

Contador Contador::operator--(int)
{
    Contador aux = *this;
    
    if (valor_ > min_)
    {
        valor_--;
    }
    return aux;
}

Contador Contador::operator--(void)
{
    if (valor_ > min_)
    {
        valor_--;
    }
    return *this;
}

int operator+(Contador cont, int n)
{
    if ((cont.valor_+=n) > cont.max_) return cont.max_;
    else return cont.valor_;
}

int operator+(int n, Contador cont)
{
    if ((n+=cont.valor_) > cont.max_) return cont.max_;
    else return n;
}

int operator-(Contador cont, int n)
{
    if ((cont.valor_-=n) < cont.min_) return cont.min_;
    else return cont.valor_;
}


int operator-(int n, Contador cont)
{
    if ((n-=cont.valor_) < cont.min_) return cont.min_;
    else return n;
}

std::ostream &operator<<(std::ostream &stream, const Contador &cont)
{
    stream << cont.valor_;
    return stream;
}

std::istream &operator>>(std::istream &stream, Contador &cont)
{
    while(true)
    {
        stream >> cont.valor_;
        if (cont.valor_ > cont.max_ or cont.valor_ < cont.min_)
        {
            std::cout << "ERROR: Value surpassed limits, try again\n";
        }
        else {break;}
    }

    std::cout << "Value applied successfully\n";
    return stream;

}