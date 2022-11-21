/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 08:01:01 by aweaver           #+#    #+#             */
/*   Updated: 2022/11/21 08:40:54 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include <iostream>
# include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
{
	public:
		FragTrap(void);
		virtual ~FragTrap(void);
		FragTrap(std::string name);
		FragTrap(FragTrap const& source);
		FragTrap & operator=(FragTrap const& rhs);
		void highFivesGuys(void);
	protected:
	private:
};

#endif
