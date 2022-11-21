/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 08:00:46 by aweaver           #+#    #+#             */
/*   Updated: 2022/11/21 11:10:14 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap("unknown")
{
	this->_hp = 100;
	this->_maxHp = 100;
	this->_mana = 50;
	this->_dmg = 20;
	std::cout << "FragTrap default constructor" << std::endl;
	return ;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->_hp = 100;
	this->_maxHp = 100;
	this->_mana = 50;
	this->_dmg = 20;
	std::cout << "FragTrap default constructor" << std::endl;
	return ;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap destroyed" << std::endl;
	return ;
}

FragTrap::FragTrap(FragTrap const & source) : ClapTrap()
{
	*this = source;
	return ;
}

FragTrap & FragTrap::operator=(FragTrap const& rhs)
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

void	FragTrap::highFivesGuys(void)
{
	if (this->_hp)
		std::cout << this->_name << " is english and therefore says give me five." << std::endl;
	else
		std::cout << this-> _name << " tries to enter give-me-five mode but is broken beyond repair."
			<< std::endl;
	return ;
}
