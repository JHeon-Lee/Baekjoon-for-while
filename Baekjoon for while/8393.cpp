#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	while (n > 10000 || n < 1)
		cin >> n;

	int sum = 0;
	for (int i = 1; i <= n; i++)
	{
		sum += i;
	}
	
	cout << sum << endl;

	return 0;
}