#pragma once
#include <string>
#include <iostream>
using namespace std;
class RandomPlayer
{
public:
	RandomPlayer();
	RandomPlayer(string name, int x=0, int y=0);
	void DoStep(Game game);
	
private:
	string name;
	int x;
	int y;
	
}; 
