#include "person.h"
#include <iostream>

Person::Person(std::string id, std::string name, std::string town, std::string province, 
    std::string country, int age, double rank, int entry_year)
{
    id_ = id;
    name_ = name;
    town_ = town;
    province_ = province;
    country_ = country;
    age_ = age;
    rank_ = rank;
    
    if (entry_year >= 2000)
    {
        entry_year_ = entry_year;
    }

    else
    {
        entry_year_ = 0;
    }

}

bool Person::SetAge(int age)
{
    if (age > 0)
    {
        age_ = age;
        return true;
    }

    return false;
}

bool Person::SetEntryYear(int entry_year)
{
    if (entry_year > 2000)
    {
        entry_year_ = entry_year;
        return true;
    }

    return false;
}

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

std::string Person::GetDataStr()
{
    return "Person:\nid: " + id_ + "\nname: " + name_ + "\ntown: " + town_ + "\nprovince: " + province_ + 
    "\ncountry: " + country_ + "\nage: " + std::to_string(age_) + "\nrank: " + std::to_string(rank_) + 
    "\nentry_year: " + std::to_string(entry_year_) + "\n";

}