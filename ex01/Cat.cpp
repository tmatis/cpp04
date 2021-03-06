/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmatis <tmatis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 15:19:55 by tmatis            #+#    #+#             */
/*   Updated: 2021/08/17 18:59:39 by tmatis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/* ************************************************************************** */
/*                                OUTTER FONCTIONS                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                     DATA INIT                              */
/* ************************************************************************** */

/* ************************************************************************** */
/*                           CONSTRUCTOR - DESTRUCTOR                         */
/* ************************************************************************** */

Cat::Cat(void)
{
	std::cout << "Cat::Cat()" << std::endl;
	this->_brain = new Brain();
	this->_type = "Cat";
}

Cat::Cat(const Cat &src)
{
	*this = src;
}

Cat::~Cat(void)
{
	std::cout << "Cat::~Cat()" << std::endl;
	delete this->_brain;
}

/* ************************************************************************** */
/*                              OVERLOAD FONCTIONS                            */
/* ************************************************************************** */

Cat	&Cat::operator=(const Cat &right)
{
	Animal::operator=(right);
	*(this->_brain) = *(right._brain);
	return (*this);
}

/* ************************************************************************** */
/*                                 ACCES FONCTIONS                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                MEMBER FONCTIONS                            */
/* ************************************************************************** */

std::string Cat::getIdea(void) const
{
	return (this->_brain->getIdea());
}

void	Cat::makeSound(void) const
{
	std::cout << "Mewwwwww" << std::endl;	
}
