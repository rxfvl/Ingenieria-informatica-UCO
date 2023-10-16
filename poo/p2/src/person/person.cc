#include "person.h"

void Person::AddPreferences(std::string s1, std::string s2, std::string s3)
{
    preferences_.insert(preferences_.begin(), s1);
    preferences_.insert(preferences_.end(), s3);
    preferences_.insert(preferences_.begin()+(preferences_.size()/2), s2);
}

void Person::ShowPreferences()
{
    std::cout << "Las preferencias son: " << '\n';

    for(int i=0; i<preferences_.size(); i++)
    {
        std::cout << preferences_[i] << ' ';
    }
    
    std::cout << '\n';
}

void Person::ChangePreference(int posicion, std::string preferencia)
{
    
    try
    {
        preferences_.at(posicion) = preferencia;
    }

    catch(std::out_of_range const&exc)
    {
        std::cout << exc.what() << '\n';
    }
}