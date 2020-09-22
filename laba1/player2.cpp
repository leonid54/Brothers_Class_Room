#include <string>
#include <iostream>
#include "player2.h"

SmartPlayer::SmartPlayer(string name, int x, int y)
{
	this->name = name;
	this->x = x;
	this->y = y;
}
SmartPlayer::SmartPlayer()
{
}
pair<int, int>SmartPlayer::DoStep()
{
	return pair<int, int>(x, y);
}