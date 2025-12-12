/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdurban- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 12:04:30 by fdurban-          #+#    #+#             */
/*   Updated: 2025/12/12 12:06:56 by fdurban-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
int	main()
{
    std::cout << "\n=== Construction Order ===" << std::endl;
    DiamondTrap diamond("DIAMOND");

    std::cout << "\n=== DiamondTrap Tests ===" << std::endl;
    diamond.whoAmI();
    diamond.attack("boss");
    diamond.whoAmI(); 
    

    std::cout << "\n=== Destruction Order ===" << std::endl;
    return (0);
}
