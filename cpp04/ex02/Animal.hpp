
#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>

class Animal {
    protected:
        std::string type;
    
    public:
        Animal(void);
        Animal(std::string _name);
        Animal(const Animal& other);
        Animal& operator=(const Animal& other);
        virtual ~Animal();
        virtual void makeSound(void) const = 0;
        const std::string& getType(void) const;
};

#endif