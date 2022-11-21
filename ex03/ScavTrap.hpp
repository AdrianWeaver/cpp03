/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 16:02:42 by aweaver           #+#    #+#             */
/*   Updated: 2022/11/21 08:40:59 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap
{
	public:
		ScavTrap(void);
		virtual ~ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const& source);
		ScavTrap & operator=(ScavTrap const& rhs);
		void guardGate(void);
	protected:
	private:
};

#endif
