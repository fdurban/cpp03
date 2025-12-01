/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdurban- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 12:04:30 by fdurban-          #+#    #+#             */
/*   Updated: 2025/12/01 14:12:51 by fdurban-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
int	main()
{
	std::string	name = "FERNANDO";
	std::string	enemy = "CRIS";
	ScavTrap	scavTrap(name);
	std::cout<<scavTrap.getenergyPoints()<<std::endl;
	scavTrap.attack(enemy);
	std::cout<<scavTrap.getenergyPoints()<<std::endl;
}
