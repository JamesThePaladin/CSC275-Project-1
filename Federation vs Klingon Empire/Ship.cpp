#include "Ship.h"

using namespace std;

//gets the health of a ship
int Ship::getHealth() 
{
	return Health;
}

//sets the ships health and if it is below 0 warns the player they are destroyed
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

//sets the ship's name
void Ship::setName(string N)
{
	name = N;
}

//talk function
void Ship::Talk(string stuffToSay) 
{
	cout << stuffToSay << endl;
}

//overloaded talk function
void Ship::Talk(string name, string stuffToSay) 
{
	cout << name << ", ";
	cout << stuffToSay << endl;
}

//attack function for when ship is attacked
int Ship::attack() 
{
	Health = Health - 10;
	return Health;
}

//help function to display information about the chosen ship
void Ship::Help() 
{
	cout << "This is a help method." << endl;
}

//displays the ships health and name to the console
void Ship::Display() 
{
	cout << "Name: " << name << endl;
	cout << "Health: " << Health << endl;
}