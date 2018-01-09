/*
** EPITECH PROJECT, 2018
** CPP Pool Day 07
** File description:
** Phaser class implementation
*/

#include <iostream>
#include "Phaser.hpp"
#include "Sounds.hpp"

Phaser::Phaser(int maxAmmo, Phaser::AmmoType type) :
	_maxAmmo(maxAmmo), _defaultType(type)
{
	if (maxAmmo < 0)
		return;
	for (int i = 0; i < maxAmmo; i++)
		this->_ammos.push(type);
}

Phaser::~Phaser()
{
}

void Phaser::fire()
{
	if (this->_ammos.empty()){
		std::cout << "Clip empty, please reload" << std::endl;
	}
	else {
		AmmoType type = this->_ammos.front();
		this->_ammos.pop();
		switch (type) {
		case REGULAR:
			std::cout << Sounds::Regular << std::endl;
			break;
		case PLASMA:
			std::cout << Sounds::Plasma << std::endl;
			break;
		case ROCKET:
			std::cout << Sounds::Rocket << std::endl;
			break;
		}
	}
}

void Phaser::ejectClip()
{
	while (!this->_ammos.empty())
		this->_ammos.pop();
}

void Phaser::changeType(AmmoType newType)
{
	switch (newType) {
	case REGULAR:
		std::cout << "Switching ammo to type: regular" << std::endl;
		break;
	case PLASMA:
		std::cout << "Switching ammo to type: plasma" << std::endl;
		break;
	case ROCKET:
		std::cout << "Switching ammo to type: rocket" << std::endl;
		break;
	}
	this->_defaultType = newType;
}

void Phaser::reload()
{
	std::cout << "Reloading..." << std::endl;
	while ((int)this->_ammos.size() < this->_maxAmmo)
		this->_ammos.push(this->_defaultType);
}

void Phaser::addAmmo(AmmoType type)
{
	if ((int)this->_ammos.size() >= this->_maxAmmo)
		std::cout << "Clip full" << std::endl;
	else
		this->_ammos.push(type);
}

int Phaser::getCurrentAmmos() const
{
	return (this->_ammos.size());
}
