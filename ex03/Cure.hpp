#ifndef CURE_HPP

# define CURE_HPP

# include <iostream>
# include "AMateria.hpp"

class Cure : public AMateria
{
	public:
					Cure(const Cure &src);
					Cure(void);
					~Cure();
		Cure	&operator=(const Cure &right);
		AMateria	*clone(void) const;
		void		use(ICharacter &target);
};

#endif // [CURE_HPP]
