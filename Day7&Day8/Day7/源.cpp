#include<iostream>
#include<fstream>
#include<string>
#include"stdlib.h"
using namespace std;

int main()
{
	ifstream file;
	ofstream outf("H://Self Code//C++//C-21-//new file.txt", ios::app);//app׷��д��
	string s1, s2;
	file.open("H://Self Code//C++//C-21-//Day5&Day6//new file.txt");
	//outf.open("H://Self Code//C++//C-21-//new file.txt");
	//����д��ֻ�ܸ���ԭ�ļ����޷����ļ��������׷��
	while (getline(file, s1))
	{
		outf << endl;//����
		outf << s1;//�����µ�һ�е�outf��
	}
	file.close();//�ر��ļ�
	outf.close();
	//�ļ������������ʾ����
	file.open("H://Self Code//C++//C-21-//new file.txt");
	while (getline(file, s1))//����Ƿ����һ�С�ÿ����һ�ζ�ȡ������ָ��������һ��
	{
		cout << s1 << endl;//���һ�к�س�
	}
	system("pause");
	return 0;
}