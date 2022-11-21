/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 16:02:41 by aweaver           #+#    #+#             */
/*   Updated: 2022/11/21 11:07:38 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap("unknown")
{
	this->_hp = 100;
	this->_maxHp = 100;
	this->_mana = 50;
	this->_dmg = 20;
	std::cout << "ScavTrap default constructor" << std::endl;
	return ;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->_hp = 100;
	this->_maxHp = 100;
	this->_mana = 50;
	this->_dmg = 20;
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

void	ScavTrap::guardGate(void)
{
	if (this->_hp)
		std::cout << this->_name << " has entered guard mode." << std::endl;
	else
		std::cout << this-> _name << " tries to enter despite being broken"
			<< std::endl;
	return ;
}
