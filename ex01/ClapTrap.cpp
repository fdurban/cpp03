/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdurban- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 14:15:37 by fdurban-          #+#    #+#             */
/*   Updated: 2025/12/11 17:14:23 by fdurban-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): name("default"), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout<<"Default constructor called"<<std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout<<"ClapTrap "<<name<<" constructor called"<<std::endl;
}
ClapTrap::ClapTrap(const ClapTrap &other)
{
	std::cout<<"Copy constructor called"<<std::endl;
	*this = other;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &other)
{
	std::cout<<"Assignment operator called"<<std::endl;
	if(this == &other)
		return *this;
	this->name = other.name;
	this->hitPoints = other.hitPoints;
	this->energyPoints = other.energyPoints;
	this->attackDamage = other.attackDamage;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout<<"ClapTrap "<<this->name<<" Destructor called"<<std::endl;
};

int	ClapTrap::getenergyPoints()
{
	return (this->energyPoints);
}
void	ClapTrap::attack(const std::string& target)
{
	if (this->hitPoints > 0 && this->energyPoints > 0)
	{
		std::cout<<"ClapTrap "<< this->name<< " attacks "<< target<<" causing "<< this->attackDamage<<" points of damage!"<<std::endl;
		--this->energyPoints;
	}
	else if (this->hitPoints == 0)
		std::cout<<this->name<<" does not have hitPoints"<<std::endl;
	else if (this->energyPoints == 0)
	{
		std::cout<<this->name<<" does not have energyPoints"<<std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hitPoints > amount)
	{
		this->hitPoints -= amount;
	}
	else
	{
		std::cout<<"ClapTrap"<<this->name<<" is already dead"<<std::endl;
		return ;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if(this->energyPoints > 0 && this->hitPoints > 0)
	{
		this->hitPoints += amount;
		--this->energyPoints;
	}
	else if(this->energyPoints == 0)
		std::cout<<this->name<<" cannot be repaired, no energyPoints"<<std::endl;
	else if(this->hitPoints == 0)
		std::cout<<this->name<<" cannot be repaired, is dead"<<std::endl;
	std::cout<<this->name<<" has been repaired by "<<amount<<std::endl;
}
