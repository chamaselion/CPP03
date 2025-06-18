/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszikora <bszikora@student.42helbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 13:06:42 by bszikora          #+#    #+#             */
/*   Updated: 2025/06/18 16:25:14 by bszikora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap()
{
    this->hitp = 100;
    this->energyp = 100;
    this->attackp = 30;
    std::cout << "FragTrap " << this->name << " has been created.\n";
}

FragTrap::FragTrap(const std::string& name): ClapTrap(name)
{
    this->hitp = 100;
    this->energyp = 100;
    this->attackp = 30;
    std::cout << "FragTrap " << this->name << " has been created.\n";
}

FragTrap::FragTrap(const FragTrap& other): ClapTrap(other)
{
    *this = other;
    std::cout << "FragTrap " << this->name << " has been copied.\n";
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
    if (this != &other)
    {
        this->name = other.name;
        this->hitp = other.hitp;
        this->energyp = other.energyp;
        this->attackp = other.attackp;
    }
    std::cout << "FragTrap " << this->name << " has been assigned.\n";
    return *this;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << this->name << " has been destroyed.\n";
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "I'm the FragTrap " << this->name << ". Do you want a high-fives? It's a pretty awesome one. You sure? Anyway...\n";
}