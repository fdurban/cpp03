/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdurban- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 13:41:35 by fdurban-          #+#    #+#             */
/*   Updated: 2025/12/01 13:43:16 by fdurban-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
class ClapTrap
{
	protected:
		std::string	name;
		unsigned int		hitPoints;
		int		energyPoints;
		int		attackDamage;
	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap&	operator=(const ClapTrap &other);
		ClapTrap(const	ClapTrap& other);
		~ClapTrap();
		int	getenergyPoints();
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};
