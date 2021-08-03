#ifndef WRONGCAT_HPP

# define WRONGCAT_HPP

# include <iostream>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
					WrongCat(const WrongCat &src);
					WrongCat(void);
					~WrongCat();
		void		makeSound(void) const;
		WrongCat	&operator=(const WrongCat &right);
};

#endif // [WRONGCAT_HPP]
