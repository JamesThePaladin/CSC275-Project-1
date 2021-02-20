#pragma once

#include "Ship.h"

class BirdofPrey : public Ship 
{
public:
	BirdofPrey();
	BirdofPrey(string N, int h);
	void FireTorpedos();
	void Help();
	int attack();
};
