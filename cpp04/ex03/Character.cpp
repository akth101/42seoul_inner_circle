
#include "Character.hpp"
#include "AMateria.hpp"

Character::Character(void) {
    this->name = "default";
    for (int i = 0; i < 4; i++) {
        this->inventory[i] = NULL;
    }
    for (int i = 0; i < 4; i++) {
        this->floor[i] = NULL;
    }
}

Character::Character(std::string const & _name){
    this->name = _name;
    for (int i = 0; i < 4; i++) {
        this->inventory[i] = NULL;
    }
    for (int i = 0; i < 4; i++) {
        this->floor[i] = NULL;
    }
}

Character::Character(const Character& other) {
    *this = other;
}

Character& Character::operator=(const Character& other) {
    if (this != &other) {
        this->name = other.name;
        for (int i = 0; i < 4; i++)
        {
            this->inventory[i] = NULL;
            this->inventory[i] = other.inventory[i];
            this->floor[i] = NULL;
            this->floor[i] = other.floor[i];
        }
    }
    return *this;
}

Character::~Character() {}


std::string const & Character::getName() const {
    return (this->name);
}

void Character::equip(AMateria* m) {
    for (int i = 0; i < 4; i++)
    {
        if (this->inventory[i] == NULL)
        {
            this->inventory[i] = m;
            return ;
        }
    }
    std::cout << "Character inventory is already full." << std::endl;
    return ;
}

void Character::unequip(int idx) {
    if (this->inventory[idx] == NULL) {
        std::cout << "this slot is empty." << std::endl;
        return ;
    }
    for (int i = 0; i < 4; i++) {
        if (this->floor[i] == NULL) {
            this->floor[i] = this->inventory[idx];
            break ;
        }
    }
    this->inventory[idx] = NULL;
    if (idx != 3) {
        for (int i = idx; i < 3; ++i) {
            this->inventory[i] = this->inventory[i + 1];
        }
    }
    this->inventory[3] = NULL;
    return ;
}

void Character::use(int idx, ICharacter& target) {
    if (this->inventory[idx] == NULL) {
        std::cout << "this slot is empty." << std::endl;
        return ;
    }
    this->inventory[idx]->use(target);
    return ;
}
