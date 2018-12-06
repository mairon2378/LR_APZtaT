#ifndef MATHOPER_H
#define MATHOPER_H

#include <QObject>

class mathOper : public QObject
{
    Q_OBJECT
    public:
        explicit mathOper(QObject *parent = 0);

    public slots:
        int pow(int, int);
};

#endif // MATHOPER_H
