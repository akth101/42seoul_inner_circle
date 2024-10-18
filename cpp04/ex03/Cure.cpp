
#include "Cure.hpp"

Cure::Cure(void) {
    this->type = "cure";
    this->powerLevel = 10;
}

Cure::Cure(std::string const & _type){
    this->type = _type;
    this->powerLevel = 10;
}

Cure::Cure(const Cure& other) {
    *this = other;
}

Cure& Cure::operator=(const Cure& other) {
    if (this != &other) {
        this->type = other.type;
        this->powerLevel = other.powerLevel;
    }
    return *this;
}

Cure::~Cure() {}

AMateria* Cure::clone() const {
    Cure *tmp = new Cure();
    return (tmp);
}

void Cure::use(ICharacter& target) {
      std::cout << "* heals " << target.getName() << "\'s wounds * " << std::endl;
      return ;
};