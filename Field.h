#pragma once

#include <vector>

class Field
{
public:
	void load_field();
	void drow_field();
	void set_symbol(int x, int y,char ch);
	char get_symbol(int x,int y);
private:
	std::vector<std::vector<char>> m_field;
};