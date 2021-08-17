#include "Brain.hpp"
#include <cstdlib>
#include <string> 
#include <sstream>

/* ************************************************************************** */
/*                                OUTTER FONCTIONS                            */
/* ************************************************************************** */

static std::string to_string(int n)
{
	std::stringstream ss;
	ss << n;
	return ss.str();
}

/* ************************************************************************** */
/*                                     DATA INIT                              */
/* ************************************************************************** */

/* ************************************************************************** */
/*                           CONSTRUCTOR - DESTRUCTOR                         */
/* ************************************************************************** */

Brain::Brain(void)
{
	int random_number = rand() % 2000;

	std::cout << "Brain constructor" << std::endl;
	for (int i = 0; i < 100; i++)
	{
		this->_ideas[i] = "brain id: " + to_string(random_number)
							+ " idea n " + to_string(i); 
	}
}

Brain::Brain(const Brain &src)
{
	std::cout << "Brain copy constructor" << std::endl;
	*this = src;
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor" << std::endl;
}

/* ************************************************************************** */
/*                              OVERLOAD FONCTIONS                            */
/* ************************************************************************** */

Brain	&Brain::operator=(const Brain &right)
{
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = right._ideas[i];
	return (*this);
}

/* ************************************************************************** */
/*                                 ACCES FONCTIONS                            */
/* ************************************************************************** */

std::string	Brain::getIdea(void) const
{
	int random_number = rand() % 100;
	return (this->_ideas[random_number]);
}

/* ************************************************************************** */
/*                                MEMBER FONCTIONS                            */
/* ************************************************************************** */

