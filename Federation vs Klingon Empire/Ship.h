#pragma once

#include "GameStructure.h"

#include <iostream>
#include <string>

using namespace std;

class Ship : public GameStructure 
{
public:
	string Name;
	int getHealth();
	void setHealth(int h);
protected:
	int Health = 100;
	void Talk(string stuffToSay);
	void Talk(string name, string stuffToSay);
	virtual int attack();
};