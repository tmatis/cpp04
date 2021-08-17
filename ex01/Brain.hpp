#ifndef BRAIN_HPP

# define BRAIN_HPP

# include <iostream>

class Brain
{
	private:
		std::string _ideas[100];
	public:
					Brain(const Brain &src);
					Brain(void);
					~Brain();
		std::string	getIdea(void) const;
		Brain	&operator=(const Brain &right);
};

#endif // [BRAIN_HPP]
