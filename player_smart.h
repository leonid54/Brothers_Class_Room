#pragma once


#include <string>
#include <iostream>

using namespace std;

class SmartPlayer
{
public:
	SmartPlayer();
	SmartPlayer(string name, int z=0, int t=0);
	pair<int, int> DoStep();
	int z;
	int t;
private:
	string name;
	
};