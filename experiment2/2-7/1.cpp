#include <iostream>
using namespace std;
int main()
{
	int a, b;
	for (a = 1; a <= 5; a++)//�ܹ���5��
	{
		for (b = 1; b <= a; b++)//ѭ��һ�����һ��*��ÿ�е�ѭ��������Ϊ��������
		{
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}