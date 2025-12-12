/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdurban- <fdurban-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 13:53:01 by fdurban-          #+#    #+#             */
/*   Updated: 2025/12/12 15:39:20 by fdurban-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{
	std::cout<<"ScavTrap Default construtor called"<<std::endl;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	std::cout<<"ScavTrap "<<this->name<<" constructor called"<<std::endl;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
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
	std::cout << "ScavTrap " << this->name << " Destructor called" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout<<this->name<<" is guarding the gate."<<std::endl;
}
