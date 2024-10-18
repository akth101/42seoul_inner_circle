

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {
    protected:
        std::string type;
    
    public:
        WrongAnimal(void);
        WrongAnimal(std::string _name);
        WrongAnimal(const WrongAnimal& other);
        WrongAnimal& operator=(const WrongAnimal& other);
        virtual ~WrongAnimal();
        void makeSound(void) const;
        virtual const std::string& getType(void) const;
};

#endif