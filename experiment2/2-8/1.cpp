#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	cout << "������һ������";
	long double a, b, c;
	cin >> a;
	if (a > 0)//aΪ����ʱ���õ�������ƽ����
	{
		b = a;
		c = (b + a / b) / 2;//�ȼ���һ�Σ��õ�cֵ
		for (b; b - c >= 1e-5 || b - c <= -1e-5; )
		{
			b = c;
			c = (b + a / b) / 2;
		}
		cout << "ƽ����Ϊ" << fixed << setprecision(6) << c << endl;
	}
	else
	{
		if (a == 0)
			cout << "ƽ����Ϊ0" << endl;
		else cout << "����û��ƽ����" << endl;
	}
	return 0;
}