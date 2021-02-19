#include "GalaxyClass.h"

GalaxyClass::GalaxyClass() 
{

}
GalaxyClass::GalaxyClass(string N, int h) 
{
	Name = N;
	Health = h;
}
void GalaxyClass::FirePhasers() 
{
	cout << "Firing all phaser banks!" << endl;
}