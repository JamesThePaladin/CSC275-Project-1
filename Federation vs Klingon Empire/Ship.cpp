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

void Ship::Talk(string stuffToSay) 
{
	cout << stuffToSay << endl;
}

void Ship::Talk(string name, string stuffToSay) 
{
	cout << name << ", ";
	cout << stuffToSay << endl;
}

int Ship::attack() 
{
	Health = Health - 10;
	return Health;
}