#include <string>
#include "player1.h"
#include <iostream>
#include "game.h"
using namespace std;

RandomPlayer::RandomPlayer(string name, int x, int y)
{
	this->name = name;
	this->x = x;
	this->y = y;
}
RandomPlayer::RandomPlayer()
{
}

pair<int, int> RandomPlayer::DoStep()
{

	return pair<int, int>(x, y);
}