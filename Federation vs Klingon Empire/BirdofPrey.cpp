#include "BirdofPrey.h"

//bird of prey constructor
BirdofPrey::BirdofPrey() 
{

}

//bird of prey constructor
BirdofPrey::BirdofPrey(string N, int h)
{
	name = N;
	Health = h;
}

//fires torpedos, but really just prints this phrase to the console
void BirdofPrey::FireTorpedos() 
{
	cout << "Firing photon torpedos!" << endl;
}

//method for taking damage from an attack
int BirdofPrey::attack()
{
	Health = Health - 25;
	return Health;
}

//displays information about the chosen ship
void BirdofPrey::Help()
{
	cout << "Birds of Prey are deadly ships of the Klingon Empire!" << endl;
}