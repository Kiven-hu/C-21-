#include<iostream>
#include "stdlib.h"
using namespace std;
//��ת�ַ�����������һ���ַ�����������ת�����
int main()
{
	/*���������������й����п���ȷ����
	����������һ��������ȷ�����鳤�ȣ�
	�����Ļ�����ͨ����̬�ڴ����ʵ�֡�*/
	int a, num = 0;
	cin >> a;
	char *b = new char[a],*c= new char[a];
	cin >> b;
	cout << &b << endl << b[2] << endl << *b << endl;
	//     �����ַ       ����  ָ��ָ��ĵ�һ���ַ�
	for (int i = a; i > 0; i--)
	{
		c[num] = b[i - 1];
		num += 1;
	}
	cout << c;
	system("pause");
	return 0;

}