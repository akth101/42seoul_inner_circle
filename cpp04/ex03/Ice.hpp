
#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria
{
    public:
        Ice(void);
        Ice(std::string const & type);
        Ice(const Ice& other);
        Ice& operator=(const Ice& other);
        ~Ice();
        virtual AMateria* clone() const;
        virtual void use(ICharacter& target);
};

#endif