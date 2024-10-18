
#include "FragTrap.hpp"

#include <iostream>

FragTrap::FragTrap(void) {
    this->name = "default";
    this->hitPoint = 100;
    this->energyPoint = 100;
    this->attackDamage = 30;
    std::cout << "FragTrap default constructor called" << std::endl;
    return ;
}

FragTrap::FragTrap(std::string _name) {
    this->name = _name;
    this->hitPoint = 100;
    this->energyPoint = 100;
    this->attackDamage = 30;
    std::cout << "FragTrap " << name << " constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) {
    std::cout << "FragTrap Copy constructor called" << std::endl;
    *this = other;
}

FragTrap& FragTrap::operator=(const FragTrap& other) {
    std::cout << "FragTrap Copy assignment operator called" << std::endl;
    if (this != &other) {
        this->name = other.name;
        this->hitPoint = other.hitPoint;
        this->energyPoint = other.energyPoint;
        this->attackDamage = other.attackDamage;
    }
    return *this;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap destructor called" << std::endl;
}

void FragTrap::attack(const std::string& target) {
    if (!energyPoint || !hitPoint) {
        std::cout << this->name << " energyPoint or hitPoint is low." << std::endl;
        return ;
    }
    std::cout << "FragTrap " << this->name << " attacked " << target << "." <<std::endl;
    return ;
}


void FragTrap::highFivesGuys(void)
{
	if (!this->hitPoint) {
		std::cout << "FragTrap " << this->name << " is already dead." << std::endl;
	}
	else {
		std::cout << "FragTrap " << this->name << " high five!\n";
	}
}