/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdurban- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 13:41:35 by fdurban-          #+#    #+#             */
/*   Updated: 2025/11/27 15:13:30 by fdurban-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class ClapTrap
{
	private:
		std::string	name;
		int		hitPoints;
		int		energyPoints;
		int		attackDamage;
	public:
		ClapTrap();
		ClapTrap(std::string name, int hitPoints, int energyPoints, int attackDamage);
		ClapTrap(const	ClapTrap& other);
		~ClapTrap();	
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
}
