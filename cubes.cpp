#include <iostream>

using namespace std;

long int Interger;
long int Result;
long int NumberArray[229] = {0};

int Cube(int);
 //Declarations
int Cube(int x)
{
	x = x*x*x;
	return x;
}

int main()
{
	cout << "Please enter a number and the program will calculate the sum of the cubes from 5^3, to Interger^3 upto the number 230 \n";

	cin >> Interger;
	
	if(Interger > 230)
	{
		cout << "Sorry, too large a number..";
	}

	else
	{

		if (Interger > 5)
		{
			for (int IntergerCount = 5; IntergerCount <= Interger; IntergerCount++)
			{
				NumberArray[IntergerCount] = Cube(IntergerCount);
				cout << NumberArray[IntergerCount] << "\n";
			}
		}

		else
		{
			for (int IntergerCount2 = 5; IntergerCount2 >= Interger; IntergerCount2--)
			{
				NumberArray[IntergerCount2] = Cube(IntergerCount2);
			}
		}
	}

	cout << "Now calculating cubes...";

	for (int i=0; i <= 229; i++)
	{
		Result = Result + NumberArray[i];
	}

	cout << "The result is: " << Result;

	cin >> NumberArray[0];
}
