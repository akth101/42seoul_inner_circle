
#include "FragTrap.hpp"
#include "ClapTrap.hpp"

int main() {

    FragTrap a("A");
    FragTrap b("B");

    a.attack("B");
    b.takeDamage(10);

    a.highFivesGuys();
    return (0);
}

