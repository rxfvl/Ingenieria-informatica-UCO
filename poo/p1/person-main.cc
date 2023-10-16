
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

	return 0;
}