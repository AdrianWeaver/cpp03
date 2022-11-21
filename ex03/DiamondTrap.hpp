/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 08:51:01 by aweaver           #+#    #+#             */
/*   Updated: 2022/11/21 10:54:21 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
# include <iostream>
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
	public:
		DiamondTrap(void);
		~DiamondTrap(void);
		DiamondTrap(std::string name);
		DiamondTrap(DiamondTrap const& source);
		DiamondTrap & operator=(DiamondTrap const& rhs);
		void	whoAmI(void);
		using	ScavTrap::attack;
	protected:
	private:
		std::string _name;
};

#endif
