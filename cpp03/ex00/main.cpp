
#include "ClapTrap.hpp"

#include <iostream>

int main() {
    ClapTrap a("A");
	ClapTrap b("B");

	a.attack("B");
	b.takeDamage(3);
	b.beRepaired(5);
	b.attack("A");
	a.takeDamage(20);
	a.beRepaired(10);
	return (0);
}