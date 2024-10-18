
#include "AMateria.hpp"

AMateria::AMateria(void) : type("default"), powerLevel(10) {}

AMateria::AMateria(std::string const & _type) : type(_type), powerLevel(10) {}

AMateria::AMateria(const AMateria& other) {
    *this = other;
}

AMateria& AMateria::operator=(const AMateria& other) {
    if (this != &other) {
        this->type = other.type;
        this->powerLevel = other.powerLevel;
    }
    return *this;
}

AMateria::~AMateria() {}

std::string const & AMateria::getType() const {
    return (this->type);
}

void AMateria::use(ICharacter& target) {
      std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
      return ;
};



