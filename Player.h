#pragma once
#include "Field.h"

class Player
{
public:
	Player(char);
	~Player();
	bool Winner(Field * field);
	void move(Field *field);
private:
	char m_icon;
	bool m_winner();
};

