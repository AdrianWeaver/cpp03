/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 16:02:41 by aweaver           #+#    #+#             */
/*   Updated: 2022/11/17 19:57:36 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
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

ScavTrap::ScavTrap(ScavTrap const & source)
{
	*this = source;
	return ;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & rhs)
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

void	ScavTrap::attack(const std::string& target)
{
	if (this->_mana > 0)
	{
		std::cout << this->_name << " attacks " << target << " for "
			<< this->_dmg << " damage." << std::endl;
		this->_mana--;
	}
	else
	{
		std::cout << this->_name << " tries to attack " << target;
		if (this->_hp <= 0)
			std::cout << " but is out of hp" << std::endl;
		else if (this->_mana == 0)
			std::cout << " but is out of energy." << std::endl;
	}
	return ;
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	if (this->_hp <= 0)
	{
		std::cout << this->_name << " is already damaged beyond repair"
			<< std::endl;
	}
	else if (this->_hp != 0)
	{
		std::cout << this->_name << " takes " << amount
			<< " damage." << std::endl;
		if (amount >= this->_hp)
		{
			std::cout << this->_name << " broke." << std::endl;
			this->_hp = 0;
		}
		else
			this->_hp -= amount;
	}
	return ;
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	if (this->_mana > 0 && this->_hp > 0)
	{
		std::cout << this->_name << " repairs itself for " << amount << " hp."
			<< std::endl;
		this->_mana--;
		this->_hp += amount;
		if (this->_hp > 10)
		{
			std::cout << this->_name << " over-repaired for " << this->_hp - 10
				<< " hp." << std::endl;
			this->_hp = 10;
		}
	}
	else if (this->_hp == 0)
	{
		std::cout << this->_name << " tries to repair itself but is broken beyond repair" << std::endl;
	}
	else if (this->_mana == 0)
	{
		std::cout << this->_name << " tries to repair itself but is out of mana" << std::endl;
	}
}
