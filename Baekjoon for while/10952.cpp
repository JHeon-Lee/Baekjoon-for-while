#include <iostream>

using namespace std;

int main()
{
	while (1)
	{
		int a, b;
		cin >> a >> b;
		if (a == 0 && b == 0)
		{
			break;
		}
		else
		{
			while ((a <= 0 || a >= 10) || (b <= 0 || b >= 10))
				cin >> a >> b;
			int sum = a + b;
			cout << sum << endl;
		}
	}
	return 0;
}

// while 과 if의 위치를 잘 확인해야한다.