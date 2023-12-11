#ifndef _COMPUTER_
#define _COMPUTER_

#include "product.h"
#include <string>

enum class ComputerType {Desktop, Laptop, Server, Tablet, Gaming};

class Computer: public Product
{
    private:
        ComputerType type_;

    public:
        Computer(std::string id, ComputerType type, std::string name = "empty", float price = 0.0, 
        std::string maker = "empty", std::string seller = "empty");
        ComputerType GetType() {return type_;}

        void SetType(ComputerType type) {type_ = type;}
};



#endif