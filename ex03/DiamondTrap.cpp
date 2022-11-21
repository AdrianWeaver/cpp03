
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 08:00:46 by aweaver           #+#    #+#             */
/*   Updated: 2022/11/21 08:03:41 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap(), ScavTrap(), FragTrap()
{
	this->_hp = 100;
	this->_maxHp = 100;
	this->_mana = 50;
	this->_dmg = 20;
	std::cout << "DiamondTrap default constructor" << std::endl;
	return ;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(), ScavTrap(), FragTrap()
{
	this->_hp = 100;
	this->_maxHp = 100;
	this->_mana = 100;
	this->_dmg = 30;
	this->_name = name;
	std::cout << "DiamondTrap default constructor" << std::endl;
	return ;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap destroyed" << std::endl;
	return ;
}

DiamondTrap::DiamondTrap(DiamondTrap const & source) : ClapTrap(), ScavTrap(), FragTrap()
{
	*this = source;
	return ;
}

DiamondTrap & DiamondTrap::operator=(DiamondTrap const& rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_hp = rhs._hp;
		this->_mana = rhs._mana;
		this->_dmg = rhs._dmg;
	}
	return (*this);
}

void	DiamondTrap::highFivesGuys(void)
{
	if (this->_hp)
		std::cout << this->_name << " is english and therefore says give me five." << std::endl;
	else
		std::cout << this-> _name << " tries to enter give-me-five mode but is broken beyond repair."
			<< std::endl;
	return ;
}
