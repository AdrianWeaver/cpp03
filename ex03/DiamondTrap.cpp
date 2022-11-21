
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

DiamondTrap::DiamondTrap(void) : ClapTrap("unknown_clap_name"), ScavTrap(), FragTrap()
{
	this->_name = "unknown";
	this->_hp = FragTrap::_hp;
	this->_maxHp = FragTrap::_hp;
	this->_mana = ScavTrap::_mana;
	this->_dmg = FragTrap::_dmg;
	std::cout << "DiamondTrap default constructor" << std::endl;
	return ;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(), FragTrap()
{
	this->_name = name;
	this->_hp = FragTrap::_hp;
	this->_maxHp = FragTrap::_hp;
	this->_mana = ScavTrap::_mana;
	this->_dmg = FragTrap::_dmg;
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

void	DiamondTrap::whoAmI(void)
{
	std::cout << "My name is: " << _name << " my ClapTrap class name is: "
		<< ClapTrap::_name << std::endl;
	return ;
}
