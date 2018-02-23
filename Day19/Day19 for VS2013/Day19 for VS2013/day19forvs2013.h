#ifndef DAY19FORVS2013_H
#define DAY19FORVS2013_H

#include <QtWidgets/QMainWindow>
#include "ui_day19forvs2013.h"

class Day19forVS2013 : public QMainWindow
{
	Q_OBJECT

public:
	Day19forVS2013(QWidget *parent = 0);
	~Day19forVS2013();

private:
	ui::Day19forVS2013Class ui;

private slots:
void But_open();
void But_close();
void button_1();
void button_2();

};

#endif // DAY19FORVS2013_H
