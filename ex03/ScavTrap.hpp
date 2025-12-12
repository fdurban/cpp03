/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdurban- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 13:24:30 by fdurban-          #+#    #+#             */
/*   Updated: 2025/12/12 14:03:29 by fdurban-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
class	ScavTrap : virtual public ClapTrap
{
	private:
		bool	isGuardingTheGate;
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap& other);
		ScavTrap&	operator=(const ScavTrap &other);
		~ScavTrap();
		void		guardGate();
};
