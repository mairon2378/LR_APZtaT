#ifndef TEST_MAX_H
#define TEST_MAX_H

#include <QObject>

class Test_mathOper : public QObject
{
    Q_OBJECT
    public:
        explicit Test_mathOper(QObject *parent = 0);

    private slots:
        void pow();
        void pow_data();
};

#endif // TEST_MAX_H
