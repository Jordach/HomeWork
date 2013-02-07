#include <iostream>

using namespace std;

int OutPut(int);

int OutPut(int x)
{
  cout << x + 17;

	cin >> x;

	return x;
}

int main()
{
	menu:

	cout << "Please type a interger: ";

	int N;

	cin >> N;

	if ((N <= 20) && (N >= 0))
	{
		OutPut (N);
	}

	else
	{
		cout << "ERROR: Please type a new interger... \n \n";
		goto menu;
	}

	return 0;

}
