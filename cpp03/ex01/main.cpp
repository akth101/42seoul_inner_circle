
#include "ScavTrap.hpp"

#include <iostream>

int main() {
    ScavTrap a("A");
    ScavTrap b("B");
    
    a.attack("B");
    b.takeDamage(10);
	b.attack("A");
    a.takeDamage(10);
    a.guardGate();

    return (0);
}