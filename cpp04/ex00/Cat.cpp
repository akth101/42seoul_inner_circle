
#include "Cat.hpp"

#include <iostream>

Cat::Cat(void) {
    this->type = "Cat";
    std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(std::string _type) {
    this->type = _type;
    std::cout << type << " constructor called" << std::endl;
}

Cat::Cat(const Cat& other) {
    std::cout << "Cat copy constructor called" << std::endl;
    *this = other;
}

Cat& Cat::operator=(const Cat& other) {
    std::cout << "Cat copy assignment operator called" << std::endl;
    if (this != &other) {
        this->type = other.type;
    }
    return *this;
}

Cat::~Cat() {
    std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound(void) const {
    std::cout << "Meow..." << std::endl;
    return ;
}
