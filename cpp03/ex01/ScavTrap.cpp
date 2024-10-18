
#include "ScavTrap.hpp"

#include <iostream>

ScavTrap::ScavTrap(void) {
    this->name = "default";
    this->hitPoint = 100;
    this->energyPoint = 50;
    this->attackDamage = 20;
    std::cout << "ScavTrap default constructor called" << std::endl;
    return ;
}

ScavTrap::ScavTrap(std::string _name) {
    this->name = _name;
    this->hitPoint = 100;
    this->energyPoint = 50;
    this->attackDamage = 20;
    std::cout << "ScavTrap " << name << " constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) {
    std::cout << "ScavTrap Copy constructor called" << std::endl;
    *this = other;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
    std::cout << "ScavTrap Copy assignment operator called" << std::endl;
    if (this != &other) {
        this->name = other.name;
        this->hitPoint = other.hitPoint;
        this->energyPoint = other.energyPoint;
        this->attackDamage = other.attackDamage;
    }
    return *this;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap destructor called" << std::endl;
}

void ScavTrap::attack(const std::string& target) {
    if (!energyPoint || !hitPoint) {
        std::cout << this->name << " energyPoint or hitPoint is low." << std::endl;
        return ;
    }
    std::cout << "ScavTrap " << this->name << " attacked " << target << "." <<std::endl;
    return ;
}

void ScavTrap::guardGate(void) {
    if (!this->hitPoint) { 
        std::cout << "ScavTrap " << this->name << " is already dead." <<std::endl;
        return ;
    }
    std::cout << "ScavTrap " << this->name << " switched to guardGate Mode." <<std::endl;
    return ;
}
