// openCVtest.cpp : �������̨Ӧ�ó������ڵ㡣
//

//#include "stdafx.h"
//
//
//int _tmain(int argc, _TCHAR* argv[])
//{
//	return 0;
//}

//l ���Դ���

#include "stdafx.h"

#include <opencv2\opencv.hpp>
//#include <opencv.hpp>
/*����������Microsoft.Cpp.x64.user��������VC++�еİ���Ŀ¼����ΪF:\Qt\opencv\build\include\opencv2ʱ���ñ�ע�͵������*/
#include <iostream>

#include <string>

using namespace std;

using namespace cv;

int main()

{

	Mat img = imread("1.jpg");

	if (img.empty())

	{

		cout << "error";

		system("pause");

		return -1;

	}

	imshow("1", img);

	waitKey();

	system("pause");

	return 0;

}