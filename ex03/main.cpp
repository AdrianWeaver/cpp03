/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 16:02:40 by aweaver           #+#    #+#             */
/*   Updated: 2022/11/22 08:37:25 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap test("Diamond trap");

	test.attack("victim");
	test.guardGate();
	test.highFivesGuys();
	test.whoAmI();
	{
		DiamondTrap othertest("Another Diamond trap");
		for (int i = 0; i < 50; i++)
			othertest.attack("his victim");
		std::cerr << "DiamondTrap should be out of energy after this." << std::endl;
		othertest.attack("his other victim");
		std::cerr << "Now proving that DiamondTrap inherited from FragTrap hitpoints" << std::endl;
		othertest.takeDamage(99);
		othertest.takeDamage(1);
	}
	return (0);
}
