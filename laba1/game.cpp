#include <string>
#include <iostream>
#include "game.h"

using namespace std;


//Game::Game(SmartPlayer a, RandomPlayer  b)
//{
//	this->a = a;
//	this->b = b;
//}


void Game::MakeStep(SmartPlayer a,RandomPlayer b)
{
	a.DoStep();
	b.DoStep();
}