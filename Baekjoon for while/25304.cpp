#include <iostream>

using namespace std;

int main()
{
	int X, N, a, b;
	int sum = 0;

	cin >> X;
	while (X > 1000000000 || X < 1)
	{
		cin >> X;
	}
	cin >> N;
	while (N > 100 || N < 1)
	{
		cin >> N;
	}
	for (int i = 0; i < N; i++)
	{
		cin >> a >> b;
		while ((a > 1000000 || a < 1) || (b > 10 || b < 1))
		{
			cin >> a >> b;
		}
		sum += a * b;
	}

	if (X == sum)
	{
		cout << "Yes" << endl;
	}
	else
	{
		cout << "No" << endl;
	}

	return 0;
}