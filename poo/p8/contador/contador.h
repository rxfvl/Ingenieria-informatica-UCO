#ifndef _CONTADOR_
#define _CONTADOR_

#include <iostream>

class Contador
{
    private:
        int valor_;
        int min_;
        int max_;

    public:
        Contador(int valor = 0, int min = 0, int max = 1000);
        int get(){return valor_;}
        Contador operator=(const int n);
        Contador operator=(const Contador cont);
        Contador operator++(int);
        Contador operator++(void);
        Contador operator--(int);
        Contador operator--(void);
        friend int operator+(Contador cont, int n);
        friend int operator+(int n, Contador cont);
        friend int operator-(Contador cont, int n);
        friend int operator-(int n, Contador cont);
        friend std::ostream &operator<<(std::ostream &stream, const Contador &cont);
        friend std::istream &operator>>(std::istream &stream, Contador &cont);

};

#endif