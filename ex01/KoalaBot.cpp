/*
** EPITECH PROJECT, 2018
** CPP Pool Day 07
** File description:
** KoalaBot class implementation
*/

#include <iostream>
#include "KoalaBot.hpp"

KoalaBot::KoalaBot() : _serial("Bob-01")
{
}

void KoalaBot::setParts(const Parts &parts)
{
	Parts partsTmp = parts;
	this->swapParts(partsTmp);
}

void KoalaBot::swapParts(Parts &parts)
{
	Parts res;
	switch (parts.getType()) {
	case ARMS:
		res = this->_arms;
		this->_arms = (Arms &)parts;
		break;
	case LEGS:
		res = this->_legs;
		this->_legs = (Legs &)parts;
		break;
	case HEAD:
		res = this->_head;
		this->_head = (Head &)parts;
	}
	parts = res;
}

void KoalaBot::informations() const
{
	std::cout << "[KoalaBot] " << this->_serial << std::endl;
	_arms.informations();
	_legs.informations();
	_head.informations();
}

bool KoalaBot::status() const
{
	return (_arms.isFunctionnal() ||
		_legs.isFunctionnal() ||
		_head.isFunctionnal());
}
