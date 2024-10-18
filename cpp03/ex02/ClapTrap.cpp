

#include "ClapTrap.hpp"

#include <iostream>

ClapTrap::ClapTrap(void) : name("default"), hitPoint(10), energyPoint(10), attackDamage(0) {
    std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string _name) : name(_name), hitPoint(10), energyPoint(10), attackDamage(0) {
    std::cout << "ClapTrap" << name << " constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) {
    std::cout << "ClapTrap copy constructor called" << std::endl;
    *this = other;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
    std::cout << "ClapTrap copy assignment operator called" << std::endl;
    if (this != &other) {
        this->name = other.name;
        this->hitPoint = other.hitPoint;
        this->energyPoint = other.energyPoint;
        this->attackDamage = other.attackDamage;
    }
    return *this;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target) {
    if (!energyPoint || !hitPoint) {
        std::cout << this->name << " energyPoint or hitPoint is low." << std::endl;
        return ;
    }
    energyPoint -= 1;
    std::cout << "ClapTrap " << this->name << " attacked " << target << "." <<std::endl;
    return ;
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (!this->hitPoint) {
        std::cout << this->name << " is already dead." << std::endl;
        return ;
    }
    this->hitPoint -= amount;
    if (hitPoint <= 0) {
        std::cout << this->name << " is dead."<< std::endl;
        this->hitPoint = 0;
    }
    else {
        std::cout << this->name << " was attacked as " << amount << "." <<std::endl;
    }
    std::cout << this->name << " hitPoint: " << this->hitPoint << std::endl;
    return ;
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (!energyPoint) {
        std::cout << "energyPoint is low" << std::endl;
        return ;
    }
    energyPoint -= 1;
    this->hitPoint += amount;
    std::cout << this->name << " was repaired as " << amount << "." <<std::endl;
    std::cout << this->name << " hitPoint: " << this->hitPoint << std::endl;
    return ;
}