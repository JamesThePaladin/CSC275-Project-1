#pragma once

#include "Ship.h"

class GalaxyClass : public Ship 
{
public:
	GalaxyClass();
	GalaxyClass(string N, int h);
	void FirePhasers();
	int attack();
	void Help();
};