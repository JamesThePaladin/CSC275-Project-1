#pragma once

#include "GameStructure.h"

#include <iostream>
#include <string>

using namespace std;

class Ship : public GameStructure 
{
public:
	string Name;
private:
	int Health;
};