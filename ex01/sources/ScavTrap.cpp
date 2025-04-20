/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszikora <bszikora@student.42helbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 17:31:45 by bszikora          #+#    #+#             */
/*   Updated: 2025/04/20 13:46:04 by bszikora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{
    this->hitp = 100;
    this->energyp = 50;
    this->attackp = 20;
	this->gatekeep = false;
    std::cout << "ScavTrap " << this->name << " has been created.\n";
}

ScavTrap::ScavTrap(const std::string& name): ClapTrap(name)
{
    this->hitp = 100;
    this->energyp = 50;
    this->attackp = 20;
	this->gatekeep = false;
    std::cout << "ScavTrap " << this->name << " has been created.\n";
}

ScavTrap::ScavTrap(const ScavTrap& other): ClapTrap(other)
{
    *this = other;
    std::cout << "ScavTrap " << this->name << " has been copied.\n";
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
    if (this != &other)
    {
        this->name = other.name;
        this->hitp = other.hitp;
        this->energyp = other.energyp;
        this->attackp = other.attackp;
    }
    std::cout << "ScavTrap " << this->name << " has been assigned.\n";
    return *this;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << this->name << " has been destroyed.\n";
}

void ScavTrap::attack(const std::string& target)
{
    if (this->energyp > 0 && this->hitp > 0)
    {
        this->energyp--;
        std::cout << "ScavTrap " << this->name << " attacks " << target
                  << ", causing " << this->attackp << " points of damage!\n";
    }
    else
        std::cout << "ScavTrap " << this->name << " cannot attack due to insufficient energy or health.\n";
}

void ScavTrap::guardGate() { std::cout << this->name << "is now in gatekeeper mode\n";}