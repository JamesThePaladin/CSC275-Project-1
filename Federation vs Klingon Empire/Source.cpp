/*
James Pope
CSC275
2/18/21
This program plays a small game between two spaceships.
Players choose either a Klingon Bird of Prey or a Federation Galaxy Class ship.
Then the two face off until one is dead.
*/

#include "Common.h"
#include "GameStructure.h"
#include "Ship.h"
#include "GalaxyClass.h"
#include "BirdofPrey.h"

using namespace std;

int main() 
{
	char replay = 'n';
	DisplayIntro();
	do
	{
		string answer = askText("Which alliance do you wish to join? Federation/Klingon: ");
		do
		{
			if (answer == "Federation")
			{
				GalaxyClass USS_Enterprise;
				USS_Enterprise.setName("Enterprise");
				USS_Enterprise.Help();
				USS_Enterprise.setHealth(100);
				USS_Enterprise.Display();
				USS_Enterprise.attack();
				USS_Enterprise.Display();
				USS_Enterprise.FirePhasers();
			}
			else if (answer == "Klingon")
			{
				BirdofPrey IKS_Pagh;
				IKS_Pagh.setName("Pagh");
				IKS_Pagh.Help();
				IKS_Pagh.setHealth(100);
				IKS_Pagh.Display();
				IKS_Pagh.attack();
				IKS_Pagh.Display();
				IKS_Pagh.FireTorpedos();
			}
			else
			{
				cout << "Invalid Answer." << endl;
			}
		} while (answer != "Federation" && answer != "Klingon");

		replay = askYesOrNo("Would you like to pick another ship? y/n: ");
	} while (replay == 'y');
	
}