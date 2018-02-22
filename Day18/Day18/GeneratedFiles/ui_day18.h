/********************************************************************************
** Form generated from reading UI file 'day18.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DAY18_H
#define UI_DAY18_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Day18Class
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Day18Class)
    {
        if (Day18Class->objectName().isEmpty())
            Day18Class->setObjectName(QStringLiteral("Day18Class"));
        Day18Class->resize(600, 400);
        menuBar = new QMenuBar(Day18Class);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        Day18Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Day18Class);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Day18Class->addToolBar(mainToolBar);
        centralWidget = new QWidget(Day18Class);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        Day18Class->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(Day18Class);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Day18Class->setStatusBar(statusBar);

        retranslateUi(Day18Class);

        QMetaObject::connectSlotsByName(Day18Class);
    } // setupUi

    void retranslateUi(QMainWindow *Day18Class)
    {
        Day18Class->setWindowTitle(QApplication::translate("Day18Class", "Day18", 0));
    } // retranslateUi

};

namespace Ui {
    class Day18Class: public Ui_Day18Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DAY18_H
