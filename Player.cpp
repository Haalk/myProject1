#include "Player.h"
#include <iostream>
#include "Helper.h"

Player::Player(char icon) : m_icon(icon)
{
}


Player::~Player()
{
}

bool Player::Winner(Field * field)
{
	if ((field->get_symbol(0, 0) == m_icon &&
		field->get_symbol(2, 0) == m_icon && field->get_symbol(4, 0) == m_icon))
		return true;
	else if (field->get_symbol(0, 2) == m_icon &&
		field->get_symbol(2, 2) == m_icon && field->get_symbol(4, 2) == m_icon)
		return true;
	else if (field->get_symbol(0, 4) == m_icon &&
		field->get_symbol(2, 4) == m_icon && field->get_symbol(4, 4) == m_icon)
		return true;
	else if ((field->get_symbol(0, 0) == m_icon &&
		field->get_symbol(0, 2) == m_icon && field->get_symbol(0, 4) == m_icon))
		return true;
	else if (field->get_symbol(2, 0) == m_icon &&
		field->get_symbol(2, 2) == m_icon && field->get_symbol(2, 4) == m_icon)
		return true;
	else if (field->get_symbol(4, 0) == m_icon &&
		field->get_symbol(4, 2) == m_icon && field->get_symbol(4, 4) == m_icon)
		return true;
	else if (field->get_symbol(0, 0) == m_icon &&
		field->get_symbol(2, 2) == m_icon && field->get_symbol(4, 4) == m_icon)
		return true;
	else if (field->get_symbol(4, 0) == m_icon &&
		field->get_symbol(2, 2) == m_icon && field->get_symbol(0, 4) == m_icon)
		return true;
	else
		return false;
}

void Player::move(Field * field)
{
	char move;
	int x;
	int y;
	bool current_move = true;
	while (current_move)
	{
		std::cin.get(move);
		for (int i = 0; i < SIZE_FIELD; i++)
		{
			for (int j = 0; j < SIZE_FIELD; j++)
			{
				if (field->get_symbol(i, j) == move)
				{
					field->set_symbol(i, j, m_icon);
					current_move = false;
				}
			}
		}
	}
}
