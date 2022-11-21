/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 08:51:01 by aweaver           #+#    #+#             */
/*   Updated: 2022/11/21 09:10:17 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
# include <iostream>
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
	public:
		DiamondTrap(void);
		virtual ~DiamondTrap(void);
		DiamondTrap(std::string name);
		DiamondTrap(DiamondTrap const& source);
		DiamondTrap & operator=(DiamondTrap const& rhs);
		void highFivesGuys(void);
	protected:
	private:
};

#endif
