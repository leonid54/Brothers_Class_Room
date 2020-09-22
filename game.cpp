#include <string>
#include <iostream>
#include "game.h"

using namespace std;


//Game::Game(SmartPlayer a, RandomPlayer  b)
//{
//	this->a = a;
//	this->b = b;
//}
Game::Game()
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			Board[i][j] = '#';
		}
	}
}
void Game::MakeStep_0(int z, int t)
{

	if (Board[z][t] == '#')
	{
		Board[z][t] = '0';
	}
}
void Game::MakeStep_X(int x, int y)
{
	
	if (Board[x][y] == '#')
	{
		Board[x][y] = 'x';
	}
	
}

void Game::getBoard()
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << Board[i][j];
		}
		cout << endl;
	}
	
}