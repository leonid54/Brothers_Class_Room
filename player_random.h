#pragma once
#include <string>
#include <iostream>
#include "game.h"
using namespace std;

class RandomPlayer
{
public:
	RandomPlayer(string name);
	string getName();
	bool doStep(int& x, int& y, Game& game);
	
	
private:
	string m_name;
	int x;
	int y;
	
}; 
