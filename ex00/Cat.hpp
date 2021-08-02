#ifndef CAT_HPP

# define CAT_HPP

# include <iostream>
# include "Animal.hpp"

class Cat : public Animal
{
	public:
					Cat(const Cat &src);
					Cat(void);
					~Cat();
		void		makeSound() const;
		Cat	&operator=(const Cat &right);
};

#endif // [CAT_HPP]
