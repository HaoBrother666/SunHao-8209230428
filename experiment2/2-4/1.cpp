#include <iostream>
using namespace std;
int main()
{
	float a, c;
	char b;
	cout << "���������ʽ��" << endl;
	cin >> a >> b >> c;
	switch (int(b))
	{
	case 43: cout << a + c;
		break;
	case 45: cout << a - c;
		break;
	case 42: cout << a * c;
		break;
	case 47:
	{
		if (c == 0)
			cout << "��������Ϊ0��" << endl;
		else cout << a / c;
	}
		break;
	default: cout << "���ʽ���Ϸ���" << endl;
	}
	return 0;
}