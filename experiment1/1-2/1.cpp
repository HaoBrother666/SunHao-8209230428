#include <iostream>
using namespace std;
int main()
{
	const float �� = 3.1415926535;
	float r, h, V;
	cout << "������Բ׶�׵İ뾶��" << endl;
	cin >> r;
	cout << "������Բ׶�ĸߣ�" << endl;
	cin >> h;
	V = (�� * (r * r) * h) / 3;
	cout << "Բ׶�����Ϊ��" << V << endl;
	return 0;
}