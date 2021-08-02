/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmatis <tmatis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 15:14:15 by tmatis            #+#    #+#             */
/*   Updated: 2021/08/02 16:14:14 by tmatis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP

# define ANIMAL_HPP

# include <iostream>

class Animal
{
	protected:
		std::string	_type;
	public:
					Animal(const Animal &src);
					Animal(void);
		virtual			~Animal();
		Animal			&operator=(const Animal &right);
		virtual void	makeSound(void) const;
		std::string		getType(void) const;
		void			setType(const std::string &type);
};

std::ostream		&operator<<(std::ostream &os, const Animal &i);

#endif // [ANIMAL_HPP]
