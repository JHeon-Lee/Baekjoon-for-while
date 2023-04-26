#include <iostream>

using namespace std;

int main()
{
	while (1)
	{
		int a, b;
		cin >> a >> b;
		if (cin.eof() == true)
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

// eof : end of file - ctrl + z 로 구현 가능