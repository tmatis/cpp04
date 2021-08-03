#ifndef WRONGANIMAL_HPP

# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
	protected:
		std::string _type;
	public:
					WrongAnimal(const WrongAnimal &src);
					WrongAnimal(void);
					~WrongAnimal();
		void		makeSound(void) const;
		std::string		getType(void) const;
		void			setType(const std::string &type);
		WrongAnimal	&operator=(const WrongAnimal &right);
};

std::ostream		&operator<<(std::ostream &os, const WrongAnimal &i);

#endif // [WRONGANIMAL_HPP]
