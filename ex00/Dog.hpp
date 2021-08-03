#ifndef DOG_HPP

# define DOG_HPP

# include <iostream>
# include "Animal.hpp"

class Dog : public Animal
{
	public:
					Dog(const Dog &src);
					Dog(void);
					~Dog();
		void		makeSound() const;
		Dog	&operator=(const Dog &right);
};

#endif // [DOG_HPP]
