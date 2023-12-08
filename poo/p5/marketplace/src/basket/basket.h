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
        void AddProduct(Product producto);
        bool DeleteProduct(Product producto);
        bool DeleteProduct(std::string id);
        void DeleteBasket();

        int GetSize()  {return product_list_.size();}
        float GetTotal() {return total_;}
        std::vector<std::string> GetIds();
        std::vector<int> GetQs(); 
};


#endif