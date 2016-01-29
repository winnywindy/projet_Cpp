#ifndef EXPRESSION_H
#define EXPRESSION_H
#include <iostream>
using namespace std;
class Expression
{
    public:
        Expression();
        virtual ~Expression();
        double getVal() const;
        friend ostream& operator<<(ostream&, const Expression &);

    protected:
        double val;
    private:

};

#endif // EXPRESSION_H
