#pragma once

#include "GameStructure.h"

#include <iostream>
#include <string>

using namespace std;

class Ship : public GameStructure 
{
public:
	string name;
	int getHealth();
	void setHealth(int h);
	void setName(string N);
	void Help();
	void Display();
	virtual int attack();
	void Talk(string stuffToSay);
	void Talk(string name, string stuffToSay);
protected:
	int Health = 100;
};