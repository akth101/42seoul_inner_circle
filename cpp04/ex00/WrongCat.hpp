

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"
#include <iostream>

class WrongCat : public WrongAnimal {
    protected:
        std::string type;
    
    public:
        WrongCat(void);
        WrongCat(std::string _name);
        WrongCat(const WrongCat& other);
        WrongCat& operator=(const WrongCat& other);
        virtual ~WrongCat();
        void makeSound(void) const;
        virtual const std::string& getType(void) const;
};

#endif