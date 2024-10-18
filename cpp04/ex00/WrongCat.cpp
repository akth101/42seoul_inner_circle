
#include "WrongCat.hpp"

WrongCat::WrongCat(void) : type("WrongCat") {
    std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat(std::string _type) : type(_type){
    std::cout << "WrongCat" << type << " constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) {
    std::cout << "WrongCat copy constructor called" << std::endl;
    *this = other;
}

WrongCat& WrongCat::operator=(const WrongCat& other) {
    std::cout << "WrongCat copy assignment operator called" << std::endl;
    if (this != &other) {
        this->type = other.type;
    }
    return *this;
}

WrongCat::~WrongCat() {
    std::cout << "WrongCat destructor called" << std::endl;
}

void WrongCat::makeSound(void) const {
    std::cout << "Meow..." << std::endl;
    return ;
}

const std::string& WrongCat::getType(void) const {
    return (type);
}