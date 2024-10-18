
#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include <string>

class Dog : public Animal {
    public:
        Dog(void);
        Dog(std::string _name);
        Dog(const Dog& other);
        Dog& operator=(const Dog& other);
        ~Dog();
        virtual void makeSound(void) const;

};

#endif