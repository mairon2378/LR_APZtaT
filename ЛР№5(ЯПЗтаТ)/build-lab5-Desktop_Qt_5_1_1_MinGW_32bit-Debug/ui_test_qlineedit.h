/********************************************************************************
** Form generated from reading UI file 'test_qlineedit.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST_QLINEEDIT_H
#define UI_TEST_QLINEEDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_test_qlineedit
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *test_qlineedit)
    {
        if (test_qlineedit->objectName().isEmpty())
            test_qlineedit->setObjectName(QStringLiteral("test_qlineedit"));
        test_qlineedit->resize(420, 299);
        centralwidget = new QWidget(test_qlineedit);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(130, 70, 80, 21));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(40, 30, 113, 21));
        test_qlineedit->setCentralWidget(centralwidget);
        menubar = new QMenuBar(test_qlineedit);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 420, 20));
        test_qlineedit->setMenuBar(menubar);
        statusbar = new QStatusBar(test_qlineedit);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        test_qlineedit->setStatusBar(statusbar);

        retranslateUi(test_qlineedit);

        QMetaObject::connectSlotsByName(test_qlineedit);
    } // setupUi

    void retranslateUi(QMainWindow *test_qlineedit)
    {
        test_qlineedit->setWindowTitle(QApplication::translate("test_qlineedit", "MainWindow", 0));
        pushButton->setText(QApplication::translate("test_qlineedit", "PushButton", 0));
    } // retranslateUi

};

namespace Ui {
    class test_qlineedit: public Ui_test_qlineedit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST_QLINEEDIT_H
