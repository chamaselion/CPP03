/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszikora <bszikora@student.42helbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 16:33:18 by bszikora          #+#    #+#             */
/*   Updated: 2025/04/10 11:31:58 by bszikora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap clap1("ClapOne");
    ClapTrap clap2("ClapTwo");

    clap1.attack("ClapTwo");
    clap2.takeDamage(5);

    clap2.attack("ClapOne");
    clap1.takeDamage(3);

    clap1.beRepaired(4);
    clap2.beRepaired(2);

    clap1.attack("ClapTwo");
    clap2.takeDamage(7);

    clap2.attack("ClapOne");
    clap1.takeDamage(10);

    clap1.beRepaired(5);
    clap2.beRepaired(3);

    return 0;
}