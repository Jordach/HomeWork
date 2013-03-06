#include <iostream>

using namespace std;

int main()
{
  cout << "Enter a number: ";

	int inputVar;

	cin >> inputVar;

	for (int i = 1; i <= inputVar; i++)
	{
		for (int y = 1; y<=inputVar+1-i; y++)
		{
			cout << "*";
		}
		cout << "\n";
	}

	cin >> inputVar;
}
