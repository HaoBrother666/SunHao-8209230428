#include <iostream>
using namespace std;
int main()
{
	int a, b;
	cout << "������������������" << endl;
	cin >> a >> b;
	int c, d;
	//����ó��������
	for (c = 1; (c <= a) || (c <= b); c++)
	{
		if ((a % c == 0) && (b % c == 0))
			d = c;
	}
	cout << "���������������Ϊ��" << d << endl;
	//����ó���С��Լ��
	int e, f, g=1;
	e = (a < b ? b : a);
	while (true)
	{
		if ((e % a == 0) && (e % b == 0))
		{
			f = e;
			break;
		}
		else e++;
	}
	cout << "����������С��Լ��Ϊ��" << f << endl;
	return 0;
}