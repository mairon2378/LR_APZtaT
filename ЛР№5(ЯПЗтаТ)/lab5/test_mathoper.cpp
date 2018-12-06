#include <QTest>
#include "test_mathoper.h"
#include "mathOper.h"

Test_mathOper::Test_mathOper(QObject *parent) : QObject(parent)
{

}

void Test_mathOper::pow_data()
{
    QTest::addColumn<int>("arg1");
    QTest::addColumn<int>("arg2");
    QTest::addColumn<int>("result");
    QTest::newRow("test1") << 2 << 2 << 5;
    QTest::newRow("test2") << 5 << 3 << 125;
}
void Test_mathOper::pow()
{
    mathOper mo;
    QFETCH(int, arg1);
    QFETCH(int, arg2);
    QFETCH(int, result);

    QCOMPARE(mo.pow(arg1, arg2), result);
}
