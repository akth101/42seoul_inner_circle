
#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <string>

class Cat : public Animal {
    private:
        Brain *brain;

    public:
        Cat(void);
        Cat(std::string _name);
        Cat(const Cat& other);
        Cat& operator=(const Cat& other);
        ~Cat();
        virtual void makeSound(void) const;
        Brain *getBrain(void);
};

#endif