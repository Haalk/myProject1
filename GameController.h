#pragma once
#include "Field.h"
#include "Player.h"
#include "Helper.h"

class GameController
{
public:
	GameController();
	~GameController();
	void Game();
	bool CheckWin(Player);
private:
	Field * field;
	Player player1;
	Player player2;
	bool EndGame;
};

