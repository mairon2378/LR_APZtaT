#include <QApplication>
#include <QTest>
#include <iostream>
#include "test_mathoper.h"
#include "test_qpushbutton.h"

using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTest::qExec(new Test_mathOper, argc, argv);
    cout << endl;
    QTest::qExec(new Test_QPushButton, argc, argv);
    return 0;
}
