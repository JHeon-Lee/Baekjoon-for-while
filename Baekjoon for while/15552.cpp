#include <iostream>

using namespace std;

int main()
{
	int count;
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	cin >> count;
	while (count < 1 || count >1000000)
		cin >> count;

	for (int i = 0; i < count; i++)
	{
		int a, b;
		cin >> a >> b;
		while ((a < 1 || a > 1000) || (b < 1 || b > 1000))
			cin >> a >> b;

		int sum = a + b;
		cout << sum << "\n";
	}

	return 0;
}