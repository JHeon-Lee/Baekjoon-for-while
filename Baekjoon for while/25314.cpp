#include <iostream>

using namespace std;

int main()
{
	int N;
	
	cin >> N;
	while (N > 1000 || N < 4 || (N % 4 != 0))
		cin >> N;

	for (int i = 0; i < N / 4; i++)
	{
		cout << "long ";
	}

	cout << "int";

	return 0;
}