#ifndef _BASKET_
#define _BASKET_

#include "product.h"
#include <string>
#include <list>
#include <vector>
#include <map>


class Basket
{
    private:
        std::list<Product> product_list_;
        std::map<std::string,int> product_quantity_;
        float total_;

    public:
        Basket(float total = 0.0){total_ = total;}
        bool exist(int id);
        void AddProduct(std::string nombre, int id);
        bool DeleteProduct(int id);
        void DeleteBasket();

        int GetSize();
        float GetTotal() {return total_;}
        std::vector<std::string> GetIds();
        std::vector<int> GetQs(); 
};


#endif