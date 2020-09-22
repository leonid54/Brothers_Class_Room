#include <string>
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

void RandomPlayer::DoStep(Game game)
{
	game.MakeStep_X(x, y);

}