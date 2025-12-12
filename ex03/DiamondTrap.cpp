/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdurban- <fdurban-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 17:11:10 by fdurban-          #+#    #+#             */
/*   Updated: 2025/12/12 18:30:49 by fdurban-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap("default_clap_name")
{
	this->name = "default";

	this->hitPoints = FragTrap::hitPoints;
	this->energyPoints = ScavTrap::energyPoints;
	this->attackDamage = FragTrap::attackDamage;
	std::cout<<"DiamondTrap default constructor called"<<std::endl;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name")
{    
	this->hitPoints = FragTrap::hitPoints;
	this->energyPoints = ScavTrap::energyPoints;
	this->attackDamage = FragTrap::attackDamage;
	std::cout<<"DiamondTrap "<<name<<" constructor called"<<std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other): ClapTrap(other)
{
	std::cout<<"DiamondTrap copy constructor called"<<std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout<<"DiamondTrap Destructor called"<<std::endl;
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap &other)
{
	if(this == &other)
		return (*this);
	this->name = other.name;
	this->hitPoints = other.hitPoints;
	this->energyPoints = other.energyPoints;
	this->attackDamage = other.attackDamage;
	return (*this);
}

void	DiamondTrap::whoAmI()
{
	std::cout<<"I am "<<this->name<<" my ClapTrap name is "<<ClapTrap::name<<std::endl;
}

void	DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}
