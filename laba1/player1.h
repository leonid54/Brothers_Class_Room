#pragma once
#include <string>
#include <iostream>
using namespace std;
class RandomPlayer: public Game
{
public:
	RandomPlayer();
	RandomPlayer(string name, int x, int y);
	pair<int, int> DoStep();

private:
	string name;
	int x;
	int y;
}; 
