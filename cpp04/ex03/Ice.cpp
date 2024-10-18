
#include "Ice.hpp"

Ice::Ice(void) {
    this->type = "ice";
    this->powerLevel = 10;
}

Ice::Ice(std::string const & _type){
    this->type = _type;
    this->powerLevel = 10;
}

Ice::Ice(const Ice& other) {
    *this = other;
}

Ice& Ice::operator=(const Ice& other) {
    if (this != &other) {
        this->type = other.type;
        this->powerLevel = other.powerLevel;
    }
    return *this;
}

Ice::~Ice() {}

AMateria* Ice::clone() const {
    Ice *tmp = new Ice();
    return (tmp);
}

void Ice::use(ICharacter& target) {
      std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
      return ;
};