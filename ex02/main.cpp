/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmatis <tmatis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 18:44:57 by tmatis            #+#    #+#             */
/*   Updated: 2021/08/17 21:42:57 by tmatis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
	// LEAK TEST
	{
		std::cout << "LEAK TEST" << std::endl;
		Animal *dog = new Dog();
		Animal *cat = new Cat();
		dog->makeSound();
		cat->makeSound();
		std::cout << dog->getIdea() << std::endl;
		std::cout << cat->getIdea() << std::endl;
		delete dog;
		delete cat;
	}
	{ // copy test
		std::cout << std::endl << "COPY TEST" << std::endl;
		Dog *dog = new Dog();
		Dog *dog2 = new Dog();

		*dog = *dog2;
		std::cout << dog->getIdea() << std::endl;
		std::cout << dog2->getIdea() << std::endl;
		delete dog;
		delete dog2;
	}
	{
		Animal *animals[10];

		std::cout << std::endl << "Create array" << std::endl;
		for (int i = 0; i < 5; i++)
			animals[i] = new Dog();
		for (int i = 5; i < 10; i++)
			animals[i] = new Cat();
		std::cout << "Array created" << std::endl;
		std::cout << "TEST CONTENT" << std::endl;
		for (int i = 0; i < 10; i++)
		{
			animals[i]->makeSound();
			std::cout << animals[i]->getIdea() << std::endl;
		}
		std::cout << "Array content printed" << std::endl;
		std::cout << "TEST DELETE" << std::endl;
		for (int i = 0; i < 10; i++)
			delete animals[i];
	}
}
