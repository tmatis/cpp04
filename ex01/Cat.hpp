#ifndef CAT_HPP

# define CAT_HPP

# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain * _brain;
	public:
					Cat(const Cat &src);
					Cat(void);
					~Cat();
		void		makeSound() const;
		std::string getIdea(void) const;
		Cat	&operator=(const Cat &right);
};

#endif // [CAT_HPP]
