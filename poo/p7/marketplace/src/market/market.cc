#include "market.h"

bool Market::AddClient(Client client)
{
    bool var = true;
    std::list<Client>::iterator it;
    for (it = client_list_.begin(); it != client_list_.end(); ++it)
    {
        if (it->GetId() == client.GetId())
        {
            var = false;
        }
    }

    if (var)
    {
        client_list_.push_back(client);
        return var;
    }
    else
    {
        return var;
    }
}

bool Market::AddSeller(Seller seller)
{
    bool var = true;
    std::list<Seller>::iterator it;
    for (it = seller_list_.begin(); it != seller_list_.end(); ++it)
    {
        if (it->GetId() == seller.GetId())
        {
            var = false;
        }
    }

    if (var)
    {
        seller_list_.push_back(seller);
        return var;
    }
    else
    {
        return var;
    }
}

bool Market::DeleteClient(Client client)
{
    for(auto it = client_list_.begin(); it != client_list_.end(); ++it)
    {
        if (it->GetId() == client.GetId())
        {
            client_list_.erase(it);
            return true;
        }
    }

    return false;
}

bool Market::DeleteSeller(Seller seller)
{
    for(auto it = seller_list_.begin(); it != seller_list_.end(); ++it)
    {
        if (it->GetId() == seller.GetId())
        {
            seller_list_.erase(it);
            return true;
        }
    }

    return false;
}

bool Market::AddProductSeller(Product p, std::string id_seller)
{
    for(auto it = seller_list_.begin(); it != seller_list_.end(); ++it)
    {
        if(it->GetId() == id_seller)
        {
            it->AddProduct(p);
            return true;
        }
    }

    return false;
}

bool Market::AddProductClient(Product p, std::string id_client)
{
    std::vector<std::string> ids;
    for (auto it = seller_list.begin(); i != seller_list.end(); ++it)
    {
        ids = it->GetIds();
        for (auto it2 = ids.begin(); it2 != ids.end(); ++it2)
        {
            if (p.GetId() == it2->GetId)
            {
                for (auto it3 = clients_list_.begin(); it3 != client_list_.end(); ++it3)
                {
                    if (it3->GetId() == id_client)
                    {
                        it3->AddProduct(p);
                        return true;
                    }
                }
            }
        }
    }
    return false;
}

bool Market::DeleteProductSeller(Product p, std::string id_seller)
{
    std::vector<std::string> ids;
    for (auto it = seller_list_.begin(); it != seller_list_.end(); ++it)
    {
        if (it->GetId() == id_seller)
        {
            ids = it->GetIds();
            for (auto it2 = ids.begin(); it2 != ids.end(); ++it2)
            {
                if (p.GetId() == it2->GetId())
                {
                    it->DeleteProduct(p);
                    return true;
                }
            }
        }
    }
    return false;
}