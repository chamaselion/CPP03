/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszikora <bszikora@student.42helbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 16:33:18 by bszikora          #+#    #+#             */
/*   Updated: 2025/04/21 13:26:54 by bszikora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	FragTrap Fraggie("Fraggie");
	FragTrap Trappie("Trappie");
	
	Fraggie.highFivesGuys();
	Trappie.highFivesGuys();

    Fraggie.attack("ScavTwo");
    Trappie.takeDamage(20);
	
    Trappie.attack("ScavOne");
    Fraggie.takeDamage(15);

    Fraggie.beRepaired(10);
    Trappie.beRepaired(5);

    Fraggie.attack("ScavTwo");
    Trappie.takeDamage(30);

    Trappie.attack("ScavOne");
    Fraggie.takeDamage(50);

    Fraggie.beRepaired(20);
    Trappie.beRepaired(10);
    return 0;
}