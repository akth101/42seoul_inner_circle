
#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <string>

class Dog : public Animal {
    private:
        Brain *brain;

    public:
        Dog(void);
        Dog(std::string _name);
        Dog(const Dog& other);
        Dog& operator=(const Dog& other);
        ~Dog();
        virtual void makeSound(void) const;
        Brain *getBrain(void);
};

#endif