#include <iostream> //By Jordan Snelling

using namespace std;

int Numbers[255] = {0};

int ArrayCount = 0;

int Result, NumberEntry;

void Average();

void Average()
{
  int x = 0;
	
	for (int y = 0; y <= ArrayCount; y++)
	{
		x = ArrayCount + x;
	}

	Result = (x / ArrayCount) / 2;

	cout << "The result is: " << Result;

}

int main()
{
	menu:

	cout << "Please enter some numbers. 0 makes the program average and exit... \n\n";

	cin >> NumberEntry;

	if (NumberEntry > 0)
	{
		Numbers[ArrayCount] = NumberEntry;
		
		ArrayCount++;

		if (ArrayCount == 254)
		{
			cout << "Forcing average as buffers are full... \n\n";

			Average();

		}

		else
		{
			goto menu;
		}
	}

	else if (NumberEntry < 0)
	{
		cout << "Please enter a POSITIVE NUMBER. \n\n";

		goto menu;
	}

	else if (NumberEntry == 0)
	{
		cout << "Calculating average...please wait a sec. \n\n";

		Average();
	}

	cin >> ArrayCount;
}

