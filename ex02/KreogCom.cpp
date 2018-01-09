/*
** EPITECH PROJECT, 2018
** CPP Pool Day 07
** File description:
** KreogCom class implementation
*/

#include <iostream>
#include "KreogCom.hpp"

KreogCom::KreogCom(int x, int y, int serial) : _x(x), _y(y), _serial(serial),
	_prev(NULL), _next(NULL)
{
	std::cout << "KreogCom " << serial << " initialized" << std::endl;
}

KreogCom::~KreogCom()
{
	std::cout << "KreogCom " << this->_serial << " shutting down" <<
		std::endl;
	if (this->_prev)
		this->_prev->_next = this->_next;
	if (this->_next)
		this->_next->_prev = this->_prev;
}

void KreogCom::addCom(int x, int y, int serial)
{
	auto *newCom = new KreogCom(x, y, serial);
	newCom->_prev = this;
	newCom->_next = this->_next;
	this->_next = newCom;
}

void KreogCom::removeCom()
{
	KreogCom *next;

	if (!this->_next)
		return;
	next = this->_next->_next;
	delete this->_next;
	this->_next = next;
	if (this->_next)
		this->_next->_prev = this;
}

KreogCom *KreogCom::getCom() const
{
	return (this->_next);
}

void KreogCom::ping() const
{
	std::cout << "KreogCom " << this->_serial << " currently at " <<
		this->_x << " " << this->_y << std::endl;
}

void KreogCom::locateSquad() const
{
	KreogCom *next = this->_next;
	while (next) {
		next->ping();
		next = next->_next;
	}
	this->ping();
}
