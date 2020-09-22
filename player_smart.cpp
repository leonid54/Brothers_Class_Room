#include <string>
#include <iostream>
#include "player_smart.h"

SmartPlayer::SmartPlayer(string name, int z, int t)
{
	this->name = name;
	this->z = z;
	this->t = t;
}
SmartPlayer::SmartPlayer()
{
}
pair<int, int>SmartPlayer::DoStep()
{
	
	return pair<int, int>(z, t);
}