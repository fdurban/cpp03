/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdurban- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 13:53:01 by fdurban-          #+#    #+#             */
/*   Updated: 2025/12/11 17:15:31 by fdurban-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap(), isGuardingTheGate (false)
{
	std::cout<<"Scavtrap default constructor called"<<std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	std::cout<<"ScavTrap "<< this->name<<" constructor called"<<std::endl;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	this->isGuardingTheGate = false;
}

ScavTrap::ScavTrap(const ScavTrap &other): ClapTrap(other)
{
	std::cout<<"ScavTrap Copy constructor called"<<std::endl;
	*this = other;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &other)
{
	std::cout<<"ScavTrap assignment operator called"<<std::endl;
	if(this == &other)
		return *this;
	this->name = other.name;
	this->hitPoints = other.hitPoints;
	this->energyPoints = other.energyPoints;
	this->attackDamage = other.attackDamage;
	this->isGuardingTheGate = other.isGuardingTheGate;
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout<<"ScavTrap "<<this->name<<" Destructor called"<<std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout<<this->name<<" is guarding the gate."<<std::endl;
}

void	ScavTrap::attack(const std::string &target)
{
	if (this->hitPoints > 0 && this->energyPoints > 0)
	{
		std::cout<<"ScavTrap "<< this->name<< " attacks "<< target<<" causing "<< this->attackDamage<<" points of damage!"<<std::endl;
		--this->energyPoints;
	}
	else if (this->hitPoints == 0)
		std::cout<<this->name<<" does not have hitPoints"<<std::endl;
	else if (this->energyPoints == 0)
	{
		std::cout<<this->name<<" does not have energyPoints"<<std::endl;
	}

}
