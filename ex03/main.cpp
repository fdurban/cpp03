/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdurban- <fdurban-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 12:04:30 by fdurban-          #+#    #+#             */
/*   Updated: 2025/12/12 15:36:42 by fdurban-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
int	main()
{
	DiamondTrap diamond("DIAMOND");
	std::cout<<std::endl;
	diamond.whoAmI();
	diamond.attack("boss");
	diamond.whoAmI(); 
	std::cout<<std::endl;
	return (0);
}
