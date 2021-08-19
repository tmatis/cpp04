#ifndef ICE_HPP

# define ICE_HPP

# include <iostream>
# include "AMateria.hpp"

class Ice : public AMateria
{
	public:
					Ice(const Ice &src);
					Ice(void);
					~Ice();
		Ice	&operator=(const Ice &right);
		AMateria	*clone(void) const;
		void		use(ICharacter &target);
};

#endif // [ICE_HPP]
