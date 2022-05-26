#include <sstream>
#include "Pair.h"

using namespace std;
Pair::Pair()
{
    a = 0;
    b = 0;
}
Pair::Pair(long x = 0, long y = 0)
{
    a = x;
    b = y;
}
Pair::Pair(const Pair& g)
{
    a = g.a;
    b = g.b;
}
Pair::~Pair()
{
}
void Pair::SetA(long value)
{
    a = value;
}

void Pair::SetB(long value)
{
    b = value;
}

Pair& Pair::operator=(const Pair& x)
{
    a = x.a;
    return *this;
}

Pair::operator string() const
{
    stringstream ss;
    ss << "a = " << a << endl;
    ss << "b = " << b << endl;

    return ss.str();
}

ostream& operator<<(ostream& out, const Pair& r)
{
    out << string(r);
    return out;
}

istream& operator>>(istream& in, Pair& r)
{
    cout << "A = "; in >> r.a;
    cout << "B = "; in >> r.b;
    cout << endl;
    return in;
}

bool operator<(const Pair& l, const Pair& f)
{
    return l.GetA() < f.GetA() ||
        l.GetA() == f.GetA() &&
        l.GetB() < f.GetB();
}

bool operator==(const Pair& l, const Pair& f)
{
    return  l.GetA() == f.GetA() && l.GetB() == f.GetB();
}

bool operator!=(const Pair& l, const Pair& f)
{
    return  l.GetA() != f.GetA() && l.GetB() != f.GetB();
}