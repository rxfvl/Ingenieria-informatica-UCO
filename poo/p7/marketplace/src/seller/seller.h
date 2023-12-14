#ifndef _SELLER_
#define _SELLER_

#include "person.h"
#include "basket.h"
#include <string>

class Seller: public Person, public Basket
{
    private:
        std::string sector_;

    public:
        Seller(std::string id, std::string name = "empty", std::string town = "empty", std::string province = "empty",
            std::string country = "empty", int age = 0, double rank = 0.0, int entry_year = 0,
            std::string sector = "empty");

        std::string GetSector() {return sector_;}
        void SetSector(std::string sector) {sector_ = sector;}
};

#endif