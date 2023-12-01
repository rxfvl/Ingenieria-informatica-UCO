#ifndef _TV_
#define _TV_

#include "product.h"

class Tv: public Product
{
    private:
        float inch_;

    public:
        Tv(std::string id, std::string name = "empty", float price = 0.0, 
        std::string maker = "empty", std::string seller = "empty", float inch = 0.0);

        float GetInch() {return inch_;}
        bool SetInch(float inch);
};


#endif