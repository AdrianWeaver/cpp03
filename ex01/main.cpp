/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 16:02:40 by aweaver           #+#    #+#             */
/*   Updated: 2022/11/17 17:30:44 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap wolfTrap("Wolf trap");
	ClapTrap otherTrap("Other trap");


	std::cerr << "## Wolf trap attacking 10 times ##" << std::endl;
	for (int i = 0; i < 10; i++)
		wolfTrap.attack("boris");
	std::cerr << "## Wolf trap trying to attack without mana ##" << std::endl;
	wolfTrap.attack("boris");
	std::cerr << "## Wolf trap trying to heal without mana ##" << std::endl;
	wolfTrap.beRepaired(10);
	std::cerr << "## Other trap taking damage ##" << std::endl;
	otherTrap.takeDamage(9);
	std::cerr << "## Other trap repairing ##" << std::endl;
	otherTrap.beRepaired(9);
	std::cerr << "## Other trap over-repairing ##" << std::endl;
	otherTrap.beRepaired(100);
	std::cerr << "## Other trap getting destroyed ##" << std::endl;
	otherTrap.takeDamage(10);
	std::cerr << "## Other trap trying to repair without hp ##" << std::endl;
	otherTrap.beRepaired(10);
	return (0);
}
