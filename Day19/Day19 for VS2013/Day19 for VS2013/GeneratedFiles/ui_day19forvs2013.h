/********************************************************************************
** Form generated from reading UI file 'day19forvs2013.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DAY19FORVS2013_H
#define UI_DAY19FORVS2013_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Day19forVS2013Class
{
public:
    QWidget *centralWidget;
    QLineEdit *Input;
    QLabel *Banjing;
    QLabel *Squar;
    QLabel *Display;
    QPushButton *pushButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Day19forVS2013Class)
    {
        if (Day19forVS2013Class->objectName().isEmpty())
            Day19forVS2013Class->setObjectName(QStringLiteral("Day19forVS2013Class"));
        Day19forVS2013Class->resize(600, 400);
        centralWidget = new QWidget(Day19forVS2013Class);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        Input = new QLineEdit(centralWidget);
        Input->setObjectName(QStringLiteral("Input"));
        Input->setGeometry(QRect(121, 91, 133, 20));
        Banjing = new QLabel(centralWidget);
        Banjing->setObjectName(QStringLiteral("Banjing"));
        Banjing->setGeometry(QRect(61, 91, 54, 16));
        Squar = new QLabel(centralWidget);
        Squar->setObjectName(QStringLiteral("Squar"));
        Squar->setGeometry(QRect(60, 140, 51, 21));
        Display = new QLabel(centralWidget);
        Display->setObjectName(QStringLiteral("Display"));
        Display->setGeometry(QRect(120, 140, 121, 21));
        Display->setFrameShape(QFrame::Panel);
        Display->setFrameShadow(QFrame::Sunken);
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(300, 210, 75, 23));
        Day19forVS2013Class->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Day19forVS2013Class);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 23));
        Day19forVS2013Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Day19forVS2013Class);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Day19forVS2013Class->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Day19forVS2013Class);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Day19forVS2013Class->setStatusBar(statusBar);

        retranslateUi(Day19forVS2013Class);

        QMetaObject::connectSlotsByName(Day19forVS2013Class);
    } // setupUi

    void retranslateUi(QMainWindow *Day19forVS2013Class)
    {
        Day19forVS2013Class->setWindowTitle(QApplication::translate("Day19forVS2013Class", "Day19forVS2013", 0));
        Banjing->setText(QApplication::translate("Day19forVS2013Class", "\345\215\212\345\276\204\357\274\232", 0));
        Squar->setText(QApplication::translate("Day19forVS2013Class", "\351\235\242\347\247\257\357\274\232", 0));
        Display->setText(QString());
        pushButton->setText(QApplication::translate("Day19forVS2013Class", "\350\256\241\347\256\227", 0));
    } // retranslateUi

};

namespace Ui {
    class Day19forVS2013Class: public Ui_Day19forVS2013Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DAY19FORVS2013_H
