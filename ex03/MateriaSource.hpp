#ifndef MATERIASOURCE_HPP

# define MATERIASOURCE_HPP

# include <iostream>
# include "IMateriaSource.hpp"
# include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria *_materia[4];
	public:
					MateriaSource(const MateriaSource &src);
					MateriaSource(void);
					~MateriaSource();
		MateriaSource	&operator=(const MateriaSource &right);
		void			learnMateria(AMateria *m);
		AMateria		*createMateria(std::string const &type);
};

#endif // [MATERIASOURCE_HPP]
