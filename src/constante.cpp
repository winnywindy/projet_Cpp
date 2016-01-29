#include "expression.h"
#include "constante.h"

Constante::Constante()
{
    //ctor
}

Constante::Constante(double n) : Expression()
{
    val = n;
}

Constante::~Constante()
{
    //dtor
}

double Constante::getVal() const
{
    return val;
}

ostream& operator<<(ostream& os, const Constante & a)


{
    os << "cde";
    return os;
}

