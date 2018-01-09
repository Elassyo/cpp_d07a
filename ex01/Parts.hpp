/*
** EPITECH PROJECT, 2018
** CPP Pool Day 07
** File description:
** Parts class definition
*/

#if !defined (PARTS_HPP_)
	#define PARTS_HPP_

	#include <string>

enum PartsType {
	ARMS,
	LEGS,
	HEAD
};

class Parts {
public:
	Parts();

	PartsType getType() const;

	bool isFunctionnal() const;
	std::string serial() const;
	void informations() const;

protected:
	Parts(PartsType partType, std::string serial, bool functional);

private:
	PartsType _partType;
	std::string _serial;
	bool _functional;
};

class Arms : public Parts {
public:
	Arms(std::string serial, bool functional);
	Arms();
};

class Legs : public Parts {
public:
	Legs(std::string serial, bool functional);
	Legs();
};

class Head : public Parts {
public:
	Head(std::string serial, bool functional);
	Head();
};

#endif /* !defined (PARTS_HPP_) */
