/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdurban- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 15:22:16 by fdurban-          #+#    #+#             */
/*   Updated: 2025/12/12 15:13:57 by fdurban-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout<<"FragTrap default constructor called"<<std::endl;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout<<"FragTrap "<<this->name<<" constructor called"<<std::endl;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &other): ClapTrap(other)
{
	*this = other;
	std::cout<<"FragTrap copy constructor called"<<std::endl;
}

FragTrap&	FragTrap::operator=(const FragTrap &other)
{
	if(this == &other)
		return (*this);
	this->name = other.name;
	this->hitPoints = other.hitPoints;
	this->energyPoints = other.energyPoints;
	this->attackDamage = other.attackDamage;
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout<<"FragTrap "<<this->name<<" Destructor called"<<std::endl;
}

void	FragTrap::highFivesGuys()
{
	std::cout<<"FragTrap "<<this->name<<" is asking you to high five. Please :)"<<std::endl;
}
