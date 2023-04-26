#include <iostream>

using namespace std;

int main()
{
	int number;

	cin >> number;
	while (number > 9 || number < 1)
	{
		cin >> number;
	}

	for (int i = 1; i < 10; i++)
	{
		cout << number << " * " << i << " = " << number * i << endl;
	}

	return 0;
}