#include "day19forvs2013.h"
#define PI 3.1415926

Day19forVS2013::Day19forVS2013(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
}

Day19forVS2013::~Day19forVS2013()
{

}

void Day19forVS2013::But_open()
{
	bool ok;
	QString tempStr;
	QString valueStr = ui.input_Edittext->toPlainText();
	int valueInt = valueStr.toInt(&ok);
	double area = valueInt*valueInt*PI;
	ui.area_label_3->setText(tempStr.setNum(area));
}