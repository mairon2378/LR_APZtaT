#include "mathOper.h"

mathOper::mathOper(QObject *parent) : QObject(parent)
{

}

int mathOper::pow(int num, int s)
{
    int res = 1;
    for(int i = 0; i < s; i++)
    {
        res *= num;
    }
    return res;
}
