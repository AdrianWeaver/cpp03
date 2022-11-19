/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 16:02:40 by aweaver           #+#    #+#             */
/*   Updated: 2022/11/19 08:07:28 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ClapTrap wolfTrap("Wolf trap");
	ClapTrap otherTrap("Other trap");


	std::cerr << "## Wolf trap attacking 10 times ##" << std::endl;
	for (int i = 0; i < 10; i++)
		wolfTrap.attack("boris");
	std::cerr << "## Wolf trap trying to attack without mana ##" << std::endl;
	wolfTrap.attack("boris");
	{
		ScavTrap scavtrap("scavtrap");
		std::cerr << "## Scav trap attacking 100 times ##" << std::endl;
		for (int i = 0; i < 10; i++)
			scavtrap.attack("victim");
		std::cerr << "## Scavtrap entering guard mode ##" << std::endl;
		scavtrap.guardGate();
		std::cerr << "## Scavtrap attacking until out of mana ##" << std::endl;
		for (int i = 0; i < 40; i++)
			scavtrap.attack("boris");
		// not said in subject if scavtrap can enter guardmode without mana
		// choice is it is not an ability but a stance, therefore allowed
		std::cerr << "## Scavtrap entering guard mode without mana ##" << std::endl;
		scavtrap.guardGate();
		std::cerr << "## Scavtrap taking damage ##" << std::endl;
		scavtrap.takeDamage(1);
		std::cerr << "## Scavtrap trying to repair without mana ##" << std::endl;
		scavtrap.beRepaired(1);
	}
	{
		ScavTrap scavtrap("scavtrap");
		std::cerr << "## Scavtrap taking damage ##" << std::endl;
		scavtrap.takeDamage(1);
		std::cerr << "## Scavtrap repairing ##" << std::endl;
		scavtrap.beRepaired(1);
		std::cerr << "## Scavtrap taking damage beyond repair##" << std::endl;
		scavtrap.takeDamage(100);
		std::cerr << "## Scavtrap trying to repair without hp ##" << std::endl;
		scavtrap.beRepaired(1);
	}
return (0);
}
