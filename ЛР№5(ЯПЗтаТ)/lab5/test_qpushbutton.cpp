#include <QtTest>
#include <QtGui>
#include <QPushButton>
#include "test_qpushbutton.h"

void Test_QPushButton::talk()
{
    QPushButton button;
    button.show();
    QVERIFY(button.isEnabled());
    button.setEnabled(false);
    QVERIFY(button.isEnabled());
}
