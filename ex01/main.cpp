/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdurban- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 12:04:30 by fdurban-          #+#    #+#             */
/*   Updated: 2025/12/11 16:38:05 by fdurban-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
int	main()
{
	std::string	nameClap = "FERNANDO";
	std::string	nameScav = "CRIS";
	ClapTrap	clapTrap(nameClap);
	ScavTrap	scavTrap(nameScav);

	clapTrap.attack(nameScav);
	clapTrap.takeDamage(5);
	clapTrap.beRepaired(1);
	std::cout<<std::endl;
	
	scavTrap.attack(nameClap);
	scavTrap.guardGate();
	std::cout<<std::endl;
	return (0);
}
