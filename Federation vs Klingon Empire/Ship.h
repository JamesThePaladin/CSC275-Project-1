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
private:
	int Health;
};