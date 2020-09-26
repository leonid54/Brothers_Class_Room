#include <string>
#include <iostream>
#include "game.h"

using namespace std;

template<typename T>
Game<T>::Game()
{
	
}

template<typename T>
void Game<T>::getBoard()
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << board[i][j];
		}
		cout << endl;
	}
	
}

template<typename T>
bool Game<T>::makeStep(int x, int y)
{
	if (board.value[x][y] == '#')
	{
		board.value[x][y] = T::getType();
		return true;
	}
	return false;
}

template<typename T>
bool Game<T>::isBoardFilled()
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (board[i][j] == '#')
			{
				return false;
			}
		}
	}
	return true;
}
template<typename T>
Board& Game<T>::getBoard2()
{
	return board;
}

