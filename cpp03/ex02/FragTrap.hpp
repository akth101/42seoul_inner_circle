
#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
    public:
        FragTrap(void);
        FragTrap(std::string _name);
        FragTrap(const FragTrap& other);
        FragTrap& operator=(const FragTrap& other);
        ~FragTrap();
        void attack(std::string const& target);
        void highFivesGuys(void);
};

#endif