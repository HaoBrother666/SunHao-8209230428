#include <iostream>
#include <string>
using namespace std;
int main()
{
	cout << "������һ���ַ���" << endl;
	string str;
	getline(cin, str); 
	char c;
	int number = 0, letter = 0, blank = 0, other = 0, i=0;
	for(i; i < str.size(); i++)
	{
		c = str[i];
		if (int(c) == 32)
			blank++;
		else
		{
			if ((int(c) >= 65 && int(c) <= 90) || (int(c) >= 97 && int(c) <= 122))
				letter++;
			else
			{
				if (int(c) >= 48 && int(c) <= 57)
					number++;
				else
				{
					other++;
				}
			}
		}
	}
	cout << "�ո����У�" << blank << endl;
	cout << "��ĸ���У�" << letter << endl;
	cout << "�������У�" << number << endl;
	cout << "�����ַ����У�" << other << endl;
	return 0;
}