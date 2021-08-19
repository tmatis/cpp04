#ifndef CHARACTER_HPP

# define CHARACTER_HPP

# include <iostream>
# include "ICharacter.hpp"
# include "AMateria.hpp"

class Character : public ICharacter
{
	private:
		AMateria	*_inventory[4];
		std::string	_name;
	public:
					Character(const Character &src);
					Character(std::string const &name);
					Character(void);
					~Character();
		Character	&operator=(const Character &right);
		void		equip(AMateria* m);
		void		unequip(int idx);
		void		use(int idx, ICharacter& target);
		const std::string	&getName(void) const;
};

#endif // [CHARACTER_HPP]
