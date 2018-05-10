#include "Field.h"
#include "Helper.h"
#include <iostream>

void Field::load_field()
{
	m_field.resize(SIZE_FIELD);
	for (int i = 0; i < SIZE_FIELD; i++)
		m_field[i].resize(SIZE_FIELD);

	char number = '1';
	char tire = '—';
	for (int i = 0; i < SIZE_FIELD; i++)
	{
		for (int j = 0; j < SIZE_FIELD; j++)
		{
			if (i == 1 || i == 3)
				m_field[i][j] = 196;
			else if (j % 2 != 1)
			{
				m_field[i][j] = number;
				number++;
			}
			else if (j % 2 == 1)
				m_field[i][j] = '|';
		}
	}
}

void Field::drow_field()
{
	system("cls");
	for (int i = 0; i < SIZE_FIELD; i++)
	{
		for (int j = 0; j < SIZE_FIELD; j++)
			std::cout << m_field[i][j];
		std::cout << std::endl;
	}
}

void Field::set_symbol(int x, int y, char ch)
{
	m_field[x][y] = ch;
}

char Field::get_symbol(int x, int y)
{
	return m_field[x][y];
}
