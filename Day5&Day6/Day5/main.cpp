#include"stdio.h"
#include <stdio.h>
#include <iostream>
#include<string>
#include<fstream>
#include<sstream>
using namespace std;
//�ļ���ȡ����
int main()
{
	ifstream file;
	file.open("H://Self Code//C++//C-21-//Day5&Day6//new file.txt");
	//H:\Self Code\C++\C-21-\Day5&Day6
	//=ifstream file("H://Self Code//C++//C-21-//Day5&Day6//new file.txt");
	string sline;//every line
	string out;
	string s1, s2;

	while (getline(file,sline))
	{
		//istringstream sin(sline);
		//sin >> s1;
		cout << sline;
	}
	system("pause");
	return 0;
}
/*
iosstream	�����д���ƴ��ڵ����ͣ�
fstream	�����д�������ļ������ͣ�
sstream	�ඨ������������ڶ�д�洢���ڴ��е�string����

istringstream����istream�����������ṩ��string�Ĺ���
ostringstream����ostream�����������ṩдstring�Ĺ���
stringstream����iostream�����������ṩ��дstring�Ĺ���

1.getline();���ж�ȡ���س�'\n'ֹͣ
2.istringstream sin(string);���ո�'\t'ֹͣ
sin>>
*/