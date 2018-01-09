/*
** EPITECH PROJECT, 2018
** CPP Pool Day 07
** File description:
** KreogCom class implementation
*/

#if !defined (KREOG_COM_HPP_)
	#define KREOG_COM_HPP_

class KreogCom {
public:
	KreogCom(int x, int y, int serial);
	~KreogCom();

	void addCom(int x, int y, int serial);
	void removeCom();
	KreogCom *getCom() const;

	void ping() const;
	void locateSquad() const;

private:
	int _x;
	int _y;
	const int _serial;
	KreogCom *_prev;
	KreogCom *_next;
};

#endif /* !defined (KREOG_COM_HPP_) */
