#include<iostream>
#include<fstream>
#include<string>
#include"stdlib.h"
using namespace std;

int main()
{
	ifstream file;
	ofstream outf("H://Self Code//C++//C-21-//new file.txt", ios::app);//app追加写入
	string s1, s2;
	file.open("H://Self Code//C++//C-21-//Day5&Day6//new file.txt");
	//outf.open("H://Self Code//C++//C-21-//new file.txt");
	//这种写法只能覆盖原文件，无法在文件后面进行追加
	while (getline(file, s1))
	{
		outf << endl;//换行
		outf << s1;//复制新的一行到outf中
	}
	file.close();//关闭文件
	outf.close();
	//文件输出到命令提示符中
	file.open("H://Self Code//C++//C-21-//new file.txt");
	while (getline(file, s1))//检测是否到最后一行。每进行一次读取，并将指针移置下一行
	{
		cout << s1 << endl;//输出一行后回车
	}
	system("pause");
	return 0;
}