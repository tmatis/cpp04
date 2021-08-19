#ifndef AMATERIA_HPP

# define AMATERIA_HPP

class ICharacter;


# include <iostream>
# include "ICharacter.hpp"

class AMateria
{
	protected:
		std::string _type;
	public:
					AMateria(std::string const & type);
					AMateria(const AMateria &src);
					AMateria(void);
		virtual		~AMateria();
		virtual AMateria * clone(void) const = 0;
		virtual void use(ICharacter & target) = 0;
		const std::string	&getType(void) const;
		AMateria	&operator=(const AMateria &right);
};

#endif // [AMATERIA_HPP]
