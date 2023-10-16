
	// person-main.cc
	// Main person

#include "person.h"
#include <iostream>


int main()
{
	Person p1("Juan", 32, 4.5);
	Person p2("Ana", 41, 7.8);

	std::cout << p1.GetName() << '\n';
	std::cout << p2.GetName() << '\n';
	std::cout << p1.GetAge() << '\n';
	std::cout << p2.GetAge() << '\n';
	std::cout << p1.GetRank() << '\n';
	std::cout << p2.GetRank() << '\n';

	std::cout << "---------------------------" << '\n';

	std::cout << p1.GetDataStr() << '\n';
	std::cout << p2.GetDataStr() << '\n';

	std::cout << "---------------------------" << '\n';

	p1.AddPreferences("Comer", "Jugar", "Saltar");
	p1.ShowPreferences();
	p1.AddPreferences("Morder", "Teclear", "Vivir");
	p1.ShowPreferences();
	p1.AddPreference("Existir");
	p1.AddPreference("No Existir");
	p1.ShowPreferences();

	std::cout << "---------------------------" << '\n';

	int pos;
	std::string pref;

	std::cout << "Introduzca la nueva preferencia" << '\n';
	std::cin >> pref;
	std::cout << "Introduzca la posicion donde quieres ponerla" << '\n';
	std::cin >> pos;

	p1.ChangePreference(pos, pref);
	p1.ShowPreferences();

	return 0;
}