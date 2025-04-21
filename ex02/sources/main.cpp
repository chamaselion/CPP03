/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszikora <bszikora@student.42helbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 16:33:18 by bszikora          #+#    #+#             */
/*   Updated: 2025/04/21 13:00:43 by bszikora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    ScavTrap scav1("ScavOne");
    ScavTrap scav2("ScavTwo");

    scav1.attack("ScavTwo");
    scav2.takeDamage(20);
	
	scav1.guardGate();
	scav2.guardGate();

	scav1.guardGate();
	scav2.guardGate();
	
    scav2.attack("ScavOne");
    scav1.takeDamage(15);

    scav1.beRepaired(10);
    scav2.beRepaired(5);

    scav1.attack("ScavTwo");
    scav2.takeDamage(30);

    scav2.attack("ScavOne");
    scav1.takeDamage(50);

    scav1.beRepaired(20);
    scav2.beRepaired(10);

    return 0;
}