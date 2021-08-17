/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmatis <tmatis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 15:14:04 by tmatis            #+#    #+#             */
/*   Updated: 2021/08/17 19:02:30 by tmatis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/* ************************************************************************** */
/*                                OUTTER FONCTIONS                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                     DATA INIT                              */
/* ************************************************************************** */

/* ************************************************************************** */
/*                           CONSTRUCTOR - DESTRUCTOR                         */
/* ************************************************************************** */

Animal::Animal(void) {}

Animal::Animal(const Animal &src)
{
	*this = src;
}

Animal::~Animal(void) {}

/* ************************************************************************** */
/*                              OVERLOAD FONCTIONS                            */
/* ************************************************************************** */

Animal	&Animal::operator=(const Animal &right)
{
	this->_type = right.getType();
	return (*this);
}

std::ostream	&operator<<(std::ostream &os, const Animal &i)
{
	os << "type: " << i.getType();
	return (os);
}

/* ************************************************************************** */
/*                                 ACCES FONCTIONS                            */
/* ************************************************************************** */

std::string	Animal::getType() const
{
	return (this->_type);
}

void	Animal::setType(const std::string &type)
{
	this->_type = type;
}

/* ************************************************************************** */
/*                                MEMBER FONCTIONS                            */
/* ************************************************************************** */

std::string		Animal::getIdea(void) const
{
	return ("no Idea");
}


void	Animal::makeSound(void) const
{
	std::cout << "I'm a unknow animal" << std::endl;
}