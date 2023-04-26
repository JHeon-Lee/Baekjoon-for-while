#include <iostream>

using namespace std;

int main()
{
	int count;
	cin >> count;
	while (count < 1)
		cin >> count;

	for (int i = 0; i < count; i++)
	{
		int a, b;
		cin >> a >> b;
		while ((a <= 0 || a >= 10) || (b <= 0 || b >= 10))
			cin >> a >> b;

		int sum = a + b;
		cout << "Case #" << i + 1 << ": " << a << " + " << b << " = " << sum << endl;
	}

	return 0;
}