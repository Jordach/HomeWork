#include <iostream> //By Jordan Snelling
#define STARTING_NUM 3


using namespace std;

int main()
{
  long long int Number = STARTING_NUM;

	int MenuChoice;

	menu:

	cout << "What would you like to do with this number: " << Number << "\n======================================= \n 1) Add 1: \n 2) Multiply by 2: \n 3) Subtract 4: \n 4) Quit:\n \n";

	cin >> MenuChoice;

	if (MenuChoice == 1)
	{
		Number++;
		cout << "\n";
		goto menu;
	}

	else if (MenuChoice == 2)
	{
		Number = Number * 2;
		cout << "\n";
		goto menu;
	}

	else if (MenuChoice == 3)
	{
		Number = Number - 4;
		cout << "\n";
		goto menu;
	}

	else if ((MenuChoice !=1) || (MenuChoice !=2) || (MenuChoice !=3))
	{
		return 0;
	}

	return 0;
}
