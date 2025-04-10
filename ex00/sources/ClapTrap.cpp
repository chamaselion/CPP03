/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszikora <bszikora@student.42helbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 16:33:20 by bszikora          #+#    #+#             */
/*   Updated: 2025/04/10 11:31:57 by bszikora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("nameme"), hitp(10), energyp(10), attackp(10) {std::cout << "Default constructor called\n";}
ClapTrap::ClapTrap(const std::string& name): name(name), hitp(10), energyp(10), attackp(10){std::cout << "Named constructor  called\n";}
ClapTrap::ClapTrap(const ClapTrap& other)
{
		this->name = other.name;
		this->hitp = other.hitp;
		this->energyp = other.energyp;
		this->attackp = other.attackp;
	std::cout << "Copy constructor  called\n";
}
ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	this->name = other.name;
	this->hitp = other.hitp;
	this->energyp = other.energyp;
	this->attackp = other.attackp;
	return (std::cout << "Copy assignment constructor called\n", *this);
}
ClapTrap::~ClapTrap() {std::cout << "Deconstructor called\n";}


void ClapTrap::attack(const std::string& target)
{
	if (this->energyp > 0 && this->hitp > 0)
	{
		this->energyp--;
		std::cout << "ClapTrap " << this->name << " attacks " << target
					<< ", causing " << this->attackp << " points of damage!\n";
	}
	else
	{
		std::cout << "ClapTrap " << this->name << " cannot attack due to insufficient energy or health.\n";
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	this->hitp -= amount;
	if (this->hitp < 0)
		this->hitp = 0;
	std::cout << "ClapTrap " << this->name << " takes " << amount << " points of damage! Remaining HP: " << this->hitp << "\n";
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energyp > 0 && this->hitp > 0)
	{
		this->hitp += amount;
		this->energyp--;
		std::cout << "ClapTrap " << this->name << " repairs itself for " << amount << " points! Remaining HP: " << this->hitp << "\n";
	}
	else
		std::cout << "ClapTrap " << this->name << " cannot repair due to insufficient energy or health.\n";
}