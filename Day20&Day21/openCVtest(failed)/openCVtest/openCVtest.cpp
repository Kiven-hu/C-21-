// openCVtest.cpp : 定义控制台应用程序的入口点。
//

//#include "stdafx.h"
//
//
//int _tmain(int argc, _TCHAR* argv[])
//{
//	return 0;
//}

//l 测试代码

#include "stdafx.h"

#include <opencv2\opencv.hpp>
//#include <opencv.hpp>
/*当环境变量Microsoft.Cpp.x64.user的属性中VC++中的包含目录配置为F:\Qt\opencv\build\include\opencv2时，用被注释掉的语句*/
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