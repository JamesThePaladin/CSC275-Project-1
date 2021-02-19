#include "Common.h"

//function for displaying intro text
void DisplayIntro() 
{
	cout << "Welcome to Federation vs Klingon Empire!" << endl;
	cout << "This is a game of might and strategy!" << endl;
	cout << "Except its not, pick a ship and see if you win or lose." << endl;
	cout << "You can choose to take the helm of a Klingon Bird of Prey,";
	cout << " or a Federation Galaxy class." << endl;
	cout << "Have fun, live long, and prosper!" << endl;
}

// generic askText function
string askText(string question)
{
	string text;
	cout << question;
	cin >> text;
	return text;
}

//generic yes or no question
char askYesOrNo(string question)
{
	// decalre answer variable
	char answer;
	do
	{
		// ask the question passed through parameter
		cout << question;
		// store input in answer
		cin >> answer;
		// return answer
		return answer;
	} while (answer != 'y' && answer != 'n');
}