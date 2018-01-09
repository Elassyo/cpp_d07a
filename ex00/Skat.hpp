/*
** EPITECH PROJECT, 2018
** CPP Pool Day 07
** File description:
** Skat class implementation
*/

#if !defined (SKAT_HPP_)
	#define SKAT_HPP_

	#include <string>

class Skat {
public:
	Skat(const std::string &name, int stimPaks);
	Skat();
	~Skat();

	int &stimPaks();
	const std::string &name() const;

	void shareStimPaks(int number, int &stock);
	void addStimPaks(unsigned int number);
	void useStimPaks();
	void status() const;

private:
	const std::string _name;
	int _stock;
};

#endif /* !defined (SKAT_HPP_) */
