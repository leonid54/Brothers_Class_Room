#pragma once
#include <string>
#include <iostream>
#include "player_random.h"
#include "player_smart.h"
using namespace std;

class Game: public RandomPlayer , public SmartPlayer
{
public:


	Game();
	void getBoard();
	void MakeStep_X( int random_step1, int random_step2);
	void MakeStep_0( int random_step1, int random_step2);
	char Board[3][3];
private:
	int random_step1;
	int random_step2;
};
