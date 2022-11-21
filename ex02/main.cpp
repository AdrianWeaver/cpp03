/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 16:02:40 by aweaver           #+#    #+#             */
/*   Updated: 2022/11/21 08:09:05 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	std::cerr << "## showing constructor/destructors order. ##" << std::endl;
	{
		FragTrap test;
	}
	std::cerr << "## now in main scope" << std::endl;
	{
		FragTrap fragtrap("fragtrap");
		std::cerr << "## Scav trap attacking 100 times ##" << std::endl;
		for (int i = 0; i < 10; i++)
			fragtrap.attack("victim");
		std::cerr << "## Fragtrap entering high five mode ##" << std::endl;
		fragtrap.highFivesGuys();
		std::cerr << "## Fragtrap attacking until out of mana ##" << std::endl;
		for (int i = 0; i < 40; i++)
			fragtrap.attack("boris");
		// not said in subject if fragtrap can enter guardmode without mana
		// choice is it is not an ability but a stance, therefore allowed
		std::cerr << "## Fragtrap entering high five mode without mana ##" << std::endl;
		fragtrap.highFivesGuys();
		std::cerr << "## Fragtrap taking damage ##" << std::endl;
		fragtrap.takeDamage(1);
		std::cerr << "## Fragtrap trying to repair without mana ##" << std::endl;
		fragtrap.beRepaired(1);
	}
	{
		FragTrap fragtrap("fragtrap");
		std::cerr << "## Fragtrap taking damage ##" << std::endl;
		fragtrap.takeDamage(1);
		std::cerr << "## Fragtrap repairing ##" << std::endl;
		fragtrap.beRepaired(1);
		std::cerr << "## Fragtrap taking damage beyond repair##" << std::endl;
		fragtrap.takeDamage(100);
		std::cerr << "## Fragtrap trying to repair without hp ##" << std::endl;
		fragtrap.beRepaired(1);
	}
	return (0);
}
