#ifndef _CLIENT_
#define _CLIENT_

#include "basket.h"
#include "person.h"
#include <string>

class Client: public Person, public Basket
{
    private:
        int premium_;
    
    public:
        Client(std::string id, std::string name = "empty", std::string town = "empty", std::string province = "empty",
            std::string country = "empty", int age = 0, double rank = 0.0, int entry_year = 0, int premium = 0);

        int GetPremium() {return premium_;}
        void SetPremium(int premium) {premium_ = premium;}
};


#endif