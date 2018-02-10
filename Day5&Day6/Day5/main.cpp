#include"stdio.h"
#include <stdio.h>
#include <iostream>
#include<string>
#include<fstream>
#include<sstream>
using namespace std;
//文件读取操作
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
iosstream	定义读写控制窗口的类型；
fstream	定义读写已命名文件的类型；
sstream	多定义的类型则用于读写存储在内存中的string对象。

istringstream：由istream派生而来，提供读string的功能
ostringstream：由ostream派生而来，提供写string的功能
stringstream：由iostream派生而来，提供读写string的功能

1.getline();按行读取遇回车'\n'停止
2.istringstream sin(string);遇空格'\t'停止
sin>>
*/