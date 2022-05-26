#pragma once
#include <string>
#include <iostream>
using namespace std;
class Pair
{
private:
    long a;
    long b;
public:
    Pair();
    Pair(long, long);
    Pair(const Pair&);
    ~Pair();
    long GetA() const { return a; }
    long GetB() const { return b; }
    void SetA(long value);
    void SetB(long value);

    Pair& operator = (const Pair&);
    operator string() const;

    friend ostream& operator << (ostream&, const Pair&);
    friend istream& operator >> (istream&, Pair&);

    friend bool operator==(const Pair& l, const Pair& f);
    friend bool operator!=(const Pair& l, const Pair& f);
    friend bool operator<(const Pair& l, const Pair& f);
};