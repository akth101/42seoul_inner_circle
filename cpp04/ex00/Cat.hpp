
#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include <string>

class Cat : public Animal {
    public:
        Cat(void);
        Cat(std::string _name);
        Cat(const Cat& other);
        Cat& operator=(const Cat& other);
        ~Cat();
        virtual void makeSound(void) const;

};

#endif