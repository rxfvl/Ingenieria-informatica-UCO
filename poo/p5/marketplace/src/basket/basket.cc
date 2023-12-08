#include "basket.h"

void Basket::AddProduct(Product producto)
{
    /*if (product_list_.count(producto.GetId()) == 0)
    {
        product_list_.push_back(producto);
        product_quantity_[producto.GetId()] = 1;
    }
    else
    {
        product_quantity_[producto.GetId()]++;
    }

    total_ += producto.GetPrice();*/

    std::list<Product>::iterator it;
    bool var = false;

    for (it = product_list_.begin(); it != product_list_.end(); ++it)
    {
        if (it->GetId() == producto.GetId())
        {
            var = true;
        }
    }
    if (var)
        {
            product_quantity_[producto.GetId()]++;
        }
        else
        {
            product_list_.push_back(producto);
            product_quantity_[producto.GetId()] = 1;
        }

        total_ += producto.GetPrice();
}

bool Basket::DeleteProduct(Product producto)
{
    if (product_quantity_.count(producto.GetId()) == 0)
    {
        return false;
    }

    else
    {
        std::list<Product>::iterator it;
        for (it = product_list_.begin(); it != product_list_.end(); ++it)
        {
            if (it->GetId() == producto.GetId())
            {
                product_quantity_[producto.GetId()]--;
                total_ -= producto.GetPrice();

                if (product_quantity_[producto.GetId()] == 0)
                {
                    product_list_.erase(it);
                    product_quantity_.erase(producto.GetId());
                    return true;
                }
            }
        }
        return true;
    }
}

bool Basket::DeleteProduct(std::string id)
{
    if(product_quantity_.count(id) == 0)
    {
        return false;
    }
    else
    {
        for(auto it = product_list_.begin(); it != product_list_.end(); ++it)
        {
            if (it->GetId() == id)
            {
                product_quantity_[id]--;
                total_ -= it->GetPrice();
            }

            if (product_quantity_[id] == 0)
            {
                product_list_.erase(it);
                return true;
            }
        }
        return true;
    }
}

void Basket::DeleteBasket()
{
    product_list_.clear();
    product_quantity_.clear();
    total_ = 0;
}

std::vector<std::string> Basket::GetIds()
{
    std::vector<std::string> vector;
    //std::list<std::string>::iterator it;

    for (auto it = product_list_.begin(); it != product_list_.end(); ++it)
    {
        vector.push_back(it->GetId());
    }

    return vector;
}

std::vector<int> Basket::GetQs()
{
    std::vector<int> vector;

    for (auto it = product_quantity_.begin(); it != product_quantity_.end(); ++it)
    {
        vector.push_back(it->second);
    }

    return vector;
}