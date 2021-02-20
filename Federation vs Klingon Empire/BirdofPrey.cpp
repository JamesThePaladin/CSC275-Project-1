#include "BirdofPrey.h"

BirdofPrey::BirdofPrey() 
{

}

BirdofPrey::BirdofPrey(string N, int h)
{
	name = N;
	Health = h;
}

void BirdofPrey::FireTorpedos() 
{
	cout << "Firing photon torpedos!" << endl;
}

int BirdofPrey::attack()
{
	Health = Health - 25;
	return Health;
}

void BirdofPrey::Help()
{
	cout << "Birds of Prey are deadly ships of the Klingon Empire!" << endl;
}