#include <iostream>

using namespace std;

unsigned int Factorial(unsigned int);


unsigned int Factorial(unsigned int x) 
{
    if (x == 0)
    {
  	return 1;
	}
    return x * Factorial(x - 1);
}


int main()
{
	cout << "Please enter a number to factorialize: ";

	int NumberAnswer;

	cin >> NumberAnswer;

	NumberAnswer = Factorial (NumberAnswer);

	cout << "The answer is: " << NumberAnswer;

	cin >> NumberAnswer;

	return 0;
}
