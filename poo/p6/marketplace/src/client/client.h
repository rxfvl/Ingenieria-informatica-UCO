#ifndef _CLIENT_
#define _CLIENT_

#include "basket.h"
#include "person.h"
#include <string>
#include <vector>

class Client: public Basket, public Person
{
    private:
        int premium_;
    
    public:
        Client(std::string id, std::string name = "empty", int age = 0, double rank = 0.0, std::string town = "empty", 
            std::string province = "empty", std::string country = "empty", int entry_year = 0);
}




#endif