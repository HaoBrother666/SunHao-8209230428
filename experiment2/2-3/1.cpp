#include <iostream>
using namespace std;
int main()
{
	float a, b, c;
	cout << "�����������ε����ߣ�" << endl;
	cin >> a >> b >> c;
	if (a < b + c && b < a + c && c < a + b)//���㹹�������ε�����
	{
		if (a == b || a == c || b == c)
			cout << "���������ǵ��������Σ�";
		else cout << "�������β��ǵ��������Σ�";
	}
	else
		cout << "�����������Σ�";
	return 0;
}

