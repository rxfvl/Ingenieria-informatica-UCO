#include "market.h"
#include <fstream>

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
    for (auto it = seller_list_.begin(); it != seller_list_.end(); ++it)
    {
        ids = it->GetIds();
        for (auto it2 = ids.begin(); it2 != ids.end(); ++it2)
        {
            if (p.GetId() == *it2)
            {
                for (auto it3 = client_list_.begin(); it3 != client_list_.end(); ++it3)
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
                if (p.GetId() == *it2)
                {
                    it->DeleteProduct(p);
                    return true;
                }
            }
        }
    }
    return false;
}

bool Market::DeleteProductClient(Product p, std::string id_client)
{
    std::vector<std::string> ids;
    for (auto it = client_list_.begin(); it != client_list_.end(); ++it)
    {
        if (it->GetId() == id_client)
        {
            return it->DeleteProduct(p);
        }
    }
    return false;
}

float Market::GetMoneyInBasket()
{
    float total = 0;
    for (auto it = client_list_.begin(); it != client_list_.end(); ++it)
    {
        total += it->GetTotal();
    }

    // for (auto it = seller_list_.begin(); it != seller_list_.end(); ++it)
    // {
    //     total += it->GetTotal();
    // }

    return total;
}

bool Market::DumpMarket(int outmode)
{
    std::vector<std::string> ids;
    std::vector<int> qs;
    int i = 0;
    
    if (outmode == 1)
    {
        std::ofstream archivo("ventas.txt");
        if (archivo.is_open())
        {
            archivo << "|-----------------------------------------------|\n";
            archivo << "|CLIENT ID\t|PRODUCT ID\t|PRODUCT QTY\t|\n";
            for (auto it = client_list_.begin(); it != client_list_.end(); ++it)
            {
                ids = it->GetIds();
                qs = it-> GetQs();
                for (auto it2 = ids.begin(); it2 != ids.end(); ++it2)
                {
                    archivo << "|" << it->GetId() << "\t|" << *it2 << "\t|" << qs[i] << "\t|\n";
                    i++;

                }
                i = 0;
            }
            archivo << "|-----------------------------------------------|\n";
            archivo << "|TOTAL: " << GetMoneyInBasket() << "\t\t|\n";
            archivo << "|-----------------------------------------------|\n";

            archivo.close();
            return true;
        }
    }
    else if (outmode == 0)
    {
        std::cout << "|-----------------------------------------------|\n";
        std::cout << "|CLIENT ID\t|PRODUCT ID\t|PRODUCT QTY\t|\n";
        for (auto it = client_list_.begin(); it != client_list_.end(); ++it)
            {
                ids = it->GetIds();
                qs = it-> GetQs();
                for (auto it2 = ids.begin(); it2 != ids.end(); ++it2)
                {
                    std::cout << "|" << it->GetId() << "\t\t|" << *it2 << "\t\t|" << qs[i] << "\t\t|\n";
                    i++;

                }
                i = 0;
            }

        std::cout << "|-----------------------------------------------|\n";
        std::cout << "|TOTAL: " << GetMoneyInBasket() << "\t\t\t\t\t|\n";
        std::cout << "|-----------------------------------------------|\n";
        return true;

    }
    return false;
}