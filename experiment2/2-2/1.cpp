#include <iostream>
using namespace std;
int main()
{
	float x, y;
	cout << "����xֵ��x=" ;
	cin >> x;
	if (x <= 0 || x >= 10)
		cout << "���������0С��10��һ������";
	else
	{
		if (0 < x && x < 1)
		{
			y = 3 - 2*x;
			cout << "y=" << y << endl;
		}
		else
		{
			if (1 <= x && x < 5)
			{
				y = 2 / (4 * x) + 1;
				cout << "y=" << y << endl;
			}
			else
			{
				y = x * x;
				cout << "y=" << y << endl;
			}
		}
	}
	return 0;
}
