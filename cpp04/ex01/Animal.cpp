
#include "Animal.hpp"

#include <iostream>

Animal::Animal(void) : type("Animal") {
    std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(std::string _type) : type(_type){
    std::cout << "Animal" << type << " constructor called" << std::endl;
}

Animal::Animal(const Animal& other) {
    std::cout << "Animal copy constructor called" << std::endl;
    *this = other;
}

Animal& Animal::operator=(const Animal& other) {
    std::cout << "Animal copy assignment operator called" << std::endl;
    if (this != &other) {
        this->type = other.type;
    }
    return *this;
}

Animal::~Animal() {
    std::cout << "Animal destructor called" << std::endl;
}

void Animal::makeSound(void) const {
    std::cout << "Animal doesn`t make sound" << std::endl;
    return ;
}

const std::string& Animal::getType(void) const {
    return (type);
}