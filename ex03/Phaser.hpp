/*
** EPITECH PROJECT, 2018
** CPP Pool Day 07
** File description:
** Phaser class definition
*/

#if !defined (PHASER_HPP_)
	#define PHASER_HPP_

	#include <queue>

class Phaser {
public:
	enum AmmoType {
		REGULAR,
		PLASMA,
		ROCKET
	};

	Phaser(int maxAmmo = 20, AmmoType type = REGULAR);
	~Phaser();

	void fire();
	void ejectClip();
	void changeType(AmmoType newType);
	void reload();
	void addAmmo(AmmoType type);

	int getCurrentAmmos() const;

private:
	int _maxAmmo;
	AmmoType _defaultType;
	std::queue<AmmoType> _ammos;
};

#endif /* !defined (PHASER_HPP_) */
