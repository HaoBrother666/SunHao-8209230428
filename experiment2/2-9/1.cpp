#include <iostream>
using namespace std;
int main()
{
	int a, b;//a����������b����ÿ����ĸ���
	float c = 0;//c�����ܼ�Ǯ
	for (a = 1, b = 2; b <= 100; b *= 2, a += 1)
	{
		c = c + 0.8 * b;
	}
	cout << "ƽ��ÿ�컨" << c / a << "Ԫ" << endl;
	return 0;
}