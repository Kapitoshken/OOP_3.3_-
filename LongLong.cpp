#include <sstream>
#include "LongLong.h"

using namespace std;

LongLong::LongLong(const LongLong& g)
{
    *this = g;
}
LongLong::~LongLong()
{

}

LongLong& LongLong::operator=(const LongLong& x)
{
    SetPair(x);
    return *this;
}

LongLong::operator string() const
{
    stringstream ss;
    ss << "Pair = " << GetPair() << endl;
  //  ss << "b = " << b << endl;

    return ss.str();
}

ostream& operator<<(ostream& out, const LongLong& r)
{
    out << string(r);
    return out;
}

istream& operator>>(istream& in, LongLong& r)
{
    long a, b;
    cout << "A = "; in >> a;
    cout << "B = "; in >> b;
    cout << endl;
    r.SetA(a);
    r.SetB(b);
    return in;
}

bool operator<(const LongLong& l, const LongLong& f)
{
    return l.GetA() < f.GetA() ||
        l.GetA() == f.GetA() &&
        l.GetB() < f.GetB();
}

bool operator==(const LongLong& l, const LongLong& f)
{
    return  l.GetA() == f.GetA() && l.GetB() == f.GetB();
}

bool operator!=(const LongLong& l, const LongLong& f)
{
    return  l.GetA() != f.GetA() && l.GetB() != f.GetB();
}