/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmatis <tmatis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 16:00:10 by tmatis            #+#    #+#             */
/*   Updated: 2021/08/03 13:37:22 by tmatis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int		main(void)
{
	{
	const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
	
	std::cout << *j << " " << std::endl;
	std::cout << *i << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();

	delete meta;
	delete i;
	delete j;
	}
	{
	const WrongAnimal* meta = new WrongAnimal();
    const WrongAnimal* i = new WrongCat();
	
	std::cout << *i << " " << std::endl;
	i->makeSound();
	meta->makeSound();

	delete meta;
	delete i;
	}
}
