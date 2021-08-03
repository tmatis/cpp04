#include "WrongAnimal.hpp"

/* ************************************************************************** */
/*                                OUTTER FONCTIONS                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                     DATA INIT                              */
/* ************************************************************************** */

/* ************************************************************************** */
/*                           CONSTRUCTOR - DESTRUCTOR                         */
/* ************************************************************************** */

WrongAnimal::WrongAnimal(void)
{

}

WrongAnimal::WrongAnimal(const WrongAnimal &src)
{
	*this = src;
}

WrongAnimal::~WrongAnimal(void)
{

}

/* ************************************************************************** */
/*                              OVERLOAD FONCTIONS                            */
/* ************************************************************************** */

WrongAnimal	&WrongAnimal::operator=(const  WrongAnimal &right)
{
	this->_type = right.getType();
	return (*this);
}

std::ostream	&operator<<(std::ostream &os, const  WrongAnimal &i)
{
	os << "type: " << i.getType();
	return (os);
}

/* ************************************************************************** */
/*                                 ACCES FONCTIONS                            */
/* ************************************************************************** */

std::string	WrongAnimal::getType() const
{
	return (this->_type);
}

void	WrongAnimal::setType(const std::string &type)
{
	this->_type = type;
}

/* ************************************************************************** */
/*                                MEMBER FONCTIONS                            */
/* ************************************************************************** */

void	WrongAnimal::makeSound(void) const
{
	std::cout << "I'm a unknow wrong animal" << std::endl;
}
