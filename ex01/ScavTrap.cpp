/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 16:02:41 by aweaver           #+#    #+#             */
/*   Updated: 2022/11/19 07:31:38 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	this->_hp = 100;
	this->_mana = 50;
	this->_dmg = 20;
	std::cout << "ScavTrap default constructor" << std::endl;
	return ;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap default constructor" << std::endl;
	return ;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap destroyed" << std::endl;
	return ;
}

ScavTrap::ScavTrap(ScavTrap const & source) : ClapTrap()
{
	*this = source;
	return ;
}

ScavTrap & ScavTrap::operator=(ScavTrap const& rhs)
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
