#include "basket.h"

void Basket::AddProduct(Product producto)
{
    if (product_list_.count(producto.GetId()) == 0)
    {
        product_list_.push_back(producto);
        product_quantity_[producto.GetId()] = 1;
    }
    else
    {
        product_quantity_[producto.GetId()]++;
    }

    total_ += producto.GetPrice();
}

bool Basket::DeleteProduct(Product producto)
{
    if (product_list_.count(producto.GetId()) == 0)
    {
        return false;
    }

    else
    {
        std::list<Product>::iterator it;
        for (it = product_list_.begin(); it<product_list_.end(); ++it)
        {
            if (it->GetId() == producto.GetId())
            {
                product_list_.erase(it);
                // BAJAR CANTIDAD EN EL MAPA Y BAJAR PRECIO DEL TOTAL
            }
        }
    }
}