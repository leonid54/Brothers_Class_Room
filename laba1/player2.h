#pragma once
#pragma once

#include <string>
#include <iostream>
#include "game.h"

using namespace std;

class SmartPlayer: public Game
{
public:
	SmartPlayer();
	SmartPlayer(string name, int x, int y);
	pair<int, int> DoStep();

private:
	string name;
	int x;
	int y;
};