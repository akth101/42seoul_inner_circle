

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) {
    for (int i = 0; i < 4; i++) {
        this->inventory[i] = NULL;
    }    
}

MateriaSource::MateriaSource(const MateriaSource& other) {
    *this = other;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other) {
    if (this != &other) {
        for (int i = 0; i < 4; i++) {
            this->inventory[i] = other.inventory[i];
        }   
    }
    return *this;
}

MateriaSource::~MateriaSource() {}

void MateriaSource::learnMateria(AMateria* m) {
    int flag = 0;
    for (int i = 0; i < 4; i++) {
        if (this->inventory[i] == NULL) {
            this->inventory[i] = m;
            flag = 1;
            break ;
        }
    }
    if (flag == 1) {
        return ;
    }
    
    std::cout << "MateriaSource inventory is already full." << std::endl;
    return ;
}

AMateria* MateriaSource::createMateria(std::string const & type) {
    for (int i = 0; i < 4; i++) {
        if (this->inventory[i] == NULL) {
            return (0);
        }
        if (type == this->inventory[i]->getType()) {
            return (this->inventory[i]->clone());
        }
    }
    std::cout << "There is no Materia you want to find." << std::endl;
    return (0);
}
