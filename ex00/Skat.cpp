/*
** EPITECH PROJECT, 2018
** CPP Pool Day 07
** File description:
** Skat class implementation
*/

#include <iostream>
#include "Skat.hpp"

Skat::Skat(const std::string &name, int stimPaks) :
	_name(name), _stock(stimPaks)
{
}

Skat::Skat() : Skat("bob", 15)
{
}

Skat::~Skat()
{
}

int &Skat::stimPaks()
{
	return (this->_stock);
}

const std::string &Skat::name() const
{
	return (this->_name);
}

void Skat::shareStimPaks(int number, int &stock)
{
	if (number <= 0)
		return;
	if (number > this->_stock) {
		std::cout << "Don't be greedy" << std::endl;
	}
	else {
		stock += number;
		this->_stock -= number;
		std::cout << "Keep the change." << std::endl;
	}
}

void Skat::addStimPaks(unsigned int number)
{
	this->_stock += number;
	if (number == 0)
		std::cout << "Hey boya, did you forget something?" << std::endl;
}

void Skat::useStimPaks()
{
	if (this->_stock > 0) {
		this->_stock--;
		std::cout << "Time to kick some ass and chew bubble gum." <<
			std::endl;
	}
	else {
		std::cout << "Mediiiiiic" << std::endl;
	}
}

void Skat::status() const
{
	std::cout << "Soldier " << this->_name << " reporting " <<
		this->_stock << " stimpaks remaining sir!" << std::endl;
}
