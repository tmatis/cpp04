#ifndef DOG_HPP

# define DOG_HPP

# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain * _brain;
	public:
					Dog(const Dog &src);
					Dog(void);
					~Dog();
		std::string getIdea(void) const;
		void		makeSound() const;
		Dog	&operator=(const Dog &right);
};

#endif // [DOG_HPP]
