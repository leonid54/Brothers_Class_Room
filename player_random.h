#pragma once
#include <string>
#include <iostream>
using namespace std;
class RandomPlayer
{
public:
	RandomPlayer();
	bool doStep(int& x, int& y, Game& game);
	
	
private:
	string name;
	int x;
	int y;
	
}; 
