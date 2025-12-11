/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdurban- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 12:04:30 by fdurban-          #+#    #+#             */
/*   Updated: 2025/12/11 16:05:23 by fdurban-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
int	main()
{
	std::string	name = "FERNANDO";
	std::string	enemy = "CRIS";
	ClapTrap	clapTrap(name);
	std::cout<<"Energy points "<<clapTrap.getenergyPoints()<<std::endl;
	std::cout<<"Hit points "<<clapTrap.getHitPoints()<<std::endl;
	clapTrap.attack(enemy);
	std::cout<<"Energy points "<<clapTrap.getenergyPoints()<<std::endl;
	std::cout<<"Hit points points before taking damage "<<clapTrap.getHitPoints()<<std::endl;
	clapTrap.takeDamage(5);
	std::cout<<"Hit points points after taking damage "<<clapTrap.getHitPoints()<<std::endl;
	clapTrap.beRepaired(1);
	std::cout<<"Energy points "<<clapTrap.getenergyPoints()<<std::endl;
	std::cout<<"Hit points "<<clapTrap.getHitPoints()<<std::endl;
	clapTrap.attack(enemy);
	std::cout<<"Energy points "<<clapTrap.getenergyPoints()<<std::endl;
	std::cout<<"Hit points "<<clapTrap.getHitPoints()<<std::endl;
	return (0);
}
