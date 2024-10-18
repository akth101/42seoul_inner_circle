
#include "Dog.hpp"

#include <iostream>

Dog::Dog(void) {
    this->brain = new Brain();
    this->type = "Dog";
    std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(std::string _type) {
    this->type = _type;
    std::cout << type << " constructor called" << std::endl;
}

Dog::Dog(const Dog& other) {
    std::cout << "Dog copy constructor called" << std::endl;
    *this = other;
}

Dog& Dog::operator=(const Dog& other) {
    std::cout << "Dog copy assignment operator called" << std::endl;
    if (this != &other) {
        delete this->brain;
        this->brain = new Brain(*(other.brain));
        this->type = other.type;
    }
    return *this;
}

Dog::~Dog() {
    delete this->brain;
    std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound(void) const {
    std::cout << "Bark!" << std::endl;
    return ;
}

Brain *Dog::getBrain(void) {
    return (brain);
}