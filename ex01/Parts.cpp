/*
** EPITECH PROJECT, 2018
** CPP Pool Day 07
** File description:
** Parts class implementation
*/

#include <iostream>
#include "Parts.hpp"

Parts::Parts()
{
}

PartsType Parts::getType() const
{
	return (this->_partType);
}

bool Parts::isFunctionnal() const
{
	return (this->_functional);
}

std::string Parts::serial() const
{
	return (this->_serial);
}

void Parts::informations() const
{
	const char *partType;
	if (this->_partType == ARMS)
		partType = "Arms";
	else if (this->_partType == LEGS)
		partType = "Legs";
	else
		partType = "Head";
	std::cout << "\t [Parts] " << partType << " " << this->_serial <<
		" status : " << (_functional ? "OK" : "KO") << std::endl;
}

Parts::Parts(PartsType partType, std::string serial, bool functional) :
	_partType(partType), _serial(serial), _functional(functional)
{
}

Arms::Arms(std::string serial, bool functional) :
	Parts(ARMS, serial, functional)
{
}

Arms::Arms() : Arms("A-01", true)
{
}

Legs::Legs(std::string serial, bool functional) :
	Parts(LEGS, serial, functional)
{
}

Legs::Legs() : Legs("L-01", true)
{
}

Head::Head(std::string serial, bool functional) :
	Parts(HEAD, serial, functional)
{
}

Head::Head() : Head("H-01", true)
{
}
