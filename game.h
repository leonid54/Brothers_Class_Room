#pragma once
#include <string>
#include <iostream>
#include <ctime>
#include "player_random.h"
#include "player_smart.h"
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

template<typename T>
class Game
{
public:


	Game();
	void getBoard();
	bool makeStep(int x, int y);
	bool isBoardFilled();
	Board& getBoard2();
private:
	Board board;
	int x;
	int y;
};
