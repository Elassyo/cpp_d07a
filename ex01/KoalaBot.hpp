/*
** EPITECH PROJECT, 2018
** CPP Pool Day 07
** File description:
** KoalaBot class implementation
*/

#if !defined (KOALA_BOT_HPP_)
	#define KOALA_BOT_HPP_

	#include <string>
	#include "Parts.hpp"

class KoalaBot {
public:
	KoalaBot();

	void setParts(const Parts &parts);
	void swapParts(Parts &parts);

	void informations() const;
	bool status() const;

private:
	std::string _serial;
	Arms _arms;
	Legs _legs;
	Head _head;
};

#endif /* !defined (KOALA_BOT_HPP_) */
