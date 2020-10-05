#pragma once
#include <string>
#include <iostream>
#include <ctime>

using namespace std;

struct Board
{
	char value[3][3];
};

struct Ñross
{
	static const char getType()
	{
		return 'x';
	}
};

struct Zero
{
	static const char getType()
	{
		return '0';
	}
};


class Game
{
public:
	Game();

	void showBoard();
	void creatBoard();
	template<typename T>
	bool makeStep(int x, int y)
	{
		if (board.value[x][y] == '#')
		{
			board.value[x][y] = T::getType();
			return true;
		}
		return false;
	}
	bool isBoardFilled();
	Board& getBoard();
	bool PlayBoardIsEnd();
	
private:
	Board board;
	int x;
	int y;
};
