#include "GameController.h"
#include <iostream>
#include <conio.h>

GameController::GameController() : player1('X'),player2('O')
{
	field = new Field;
	EndGame = false;
}


GameController::~GameController()
{
}

void GameController::Game()
{
	char ch = 'a';
	std::cout << "\n\n\t\t\tThis is a Tic-tac-toe"
		<< "\n\t\t\tby Denis.Good luck,have fun!";
	_getch();
	system("cls");
	char name1[SIZE_NAME], name2[SIZE_NAME];
	
	while (ch != 'q')
	{
		int count_move = 0;
		EndGame = false;
		field->load_field();
		std::cout << "\n\tEnter name player 1: ";
		std::cin >> name1;
		std::cout << "\n\tEnter name player 2: ";
		std::cin >> name2;
		field->drow_field();
		while (!EndGame)
		{		
			std::cout << "\n" << name1 << " move: ";
			player1.move(field);
			field->drow_field();
			count_move++;
			if (player1.Winner(field))
				break;;
			if (count_move == 9)
				break;
			std::cout << "\n" << name2 << " move: ";
			player2.move(field);
			field->drow_field();
			if (player2.Winner(field))
				break;;
			EndGame = player2.Winner(field);
			count_move++;	
		}
		system("cls");
		if (player1.Winner(field))
			std::cout << "\n\n\t\tCongratulation! " << name1 << " Win!";
		else if (player2.Winner(field))
			std::cout << "\n\n\t\tCongratulation! " << name2 << " Win!";
		else
			std::cout << "\n\n\t\tIn this game wins a draw!!!";
		_getch();
		std::cout << "\nPlay again? <q to quit>: ";
		std::cin >> ch;
	}
	system("cls");
	std::cout << "\n\n\t\t\tThank you.Bye!!!";
	_getch();
}

bool GameController::CheckWin(Player player)
{
	return player.Winner(field);
}
