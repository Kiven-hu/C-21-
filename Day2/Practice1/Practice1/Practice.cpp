#include<iostream>
#include "stdlib.h"
using namespace std;
//��ת�ַ�����������һ���ַ�����������ת�����
int main()
{
	/*���������������й����п���ȷ����
	����������һ��������ȷ�����鳤�ȣ�
	�����Ļ�����ͨ����̬�ڴ����ʵ�֡�*/
	int a;
	cin >> a;
	char *b = new char[a];
	cin >> b;
	cout << &b << endl << b << endl << *b << endl;
	//�����ַ  ����  ָ��ָ��ĵ�һ���ַ�
	*b = *b + a ;
	for (int i = a; i > 0; i--)
	{
		*b = *b - 1;
		cout << *b ;
	}
	system("pause");
	return 0;

}