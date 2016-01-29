#include "expression.h"

Expression::Expression()
{
    //ctor
}

Expression::~Expression()
{
    //dtor
}

double Expression::getVal() const
{
    return val;
}

ostream& operator<<(ostream& os, const Expression & a)
{
    os << a.getVal();
    return os;
}

