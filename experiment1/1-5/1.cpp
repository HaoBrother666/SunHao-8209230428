#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	float a, b;
	cout << "���뻪���¶ȣ�" << endl;
	cin >> a;
	b = 5 * (a - 32) / 9;
	cout << "�����¶�Ϊ��" << fixed << setprecision(2) << b << endl;
	return 0;
}