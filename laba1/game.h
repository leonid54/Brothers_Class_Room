#pragma once
#include <string>
#include <iostream>
#include "player1.h"
#include "player2.h"
using namespace std;

class Game
{
public:
	Game();
	void MakeStep(SmartPlayer a, RandomPlayer b);
	

private:
	
	int field[3][3];
	int x, y;

	void MakeStep(SmartPlayer a, RandomPlayer b);

};
