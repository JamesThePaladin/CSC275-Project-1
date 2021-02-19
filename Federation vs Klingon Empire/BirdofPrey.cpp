#include "BirdofPrey.h"

BirdofPrey::BirdofPrey() 
{

}

BirdofPrey::BirdofPrey(string N, int h)
{
	Name = N;
	Health = h;
}

void BirdofPrey::FireTorpedos() 
{
	cout << "Firing photon torpedos!" << endl;
}

int Ship::attack()
{
	Health = Health - 25;
	return Health;
}