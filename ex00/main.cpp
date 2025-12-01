/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdurban- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 12:04:30 by fdurban-          #+#    #+#             */
/*   Updated: 2025/12/01 12:55:09 by fdurban-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
int	main()
{
	std::string	name = "FERNANDO";
	std::string	enemy = "CRIS";
	ClapTrap	clapTrap(name);
	std::cout<<clapTrap.getenergyPoints()<<std::endl;
	clapTrap.attack(enemy);
	std::cout<<clapTrap.getenergyPoints()<<std::endl;
}
