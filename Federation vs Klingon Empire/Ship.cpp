#include "Ship.h"

using namespace std;

int Ship::getHealth() 
{
	return Health;
}
void Ship::setHealth(int h) 
{
	if (h <= 0)
	{
		cout << "Captain, the ship! She's going down!" << endl;
		Health = 0;
	}
	else 
	{
		Health = h;
	}
}