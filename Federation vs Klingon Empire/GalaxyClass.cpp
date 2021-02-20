#include "GalaxyClass.h"

GalaxyClass::GalaxyClass() 
{

}
GalaxyClass::GalaxyClass(string N, int h) 
{
	name = N;
	Health = h;
}
void GalaxyClass::FirePhasers() 
{
	cout << "Firing all phaser banks!" << endl;
}

int GalaxyClass::attack() 
{
	Health = Health - 25;
	return Health;
}

void GalaxyClass::Help() 
{
	cout << "Galaxy Class Federation ships are the top of the line!" << endl;
}