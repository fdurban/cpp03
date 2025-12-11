/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdurban- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 12:04:30 by fdurban-          #+#    #+#             */
/*   Updated: 2025/12/11 17:02:11 by fdurban-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
int	main()
{
	std::string	nameClap = "FERNANDO";
	std::string	nameScav = "CRIS";
	std::string	nameFrag = "JAIME";
	ClapTrap	clapTrap(nameClap);
	ScavTrap	scavTrap(nameScav);
	FragTrap	fragTrap(nameFrag);

	clapTrap.attack(nameScav);
	clapTrap.takeDamage(5);
	clapTrap.beRepaired(1);
	std::cout<<std::endl;
	
	scavTrap.attack(nameClap);
	scavTrap.guardGate();
	std::cout<<std::endl;

	fragTrap.highFivesGuys();
	std::cout<<std::endl;
	return (0);

}
