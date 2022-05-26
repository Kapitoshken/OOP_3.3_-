#pragma once
#include <string>
#include <iostream>
#include "Pair.h"

using namespace std;
class LongLong :public Pair
{
public:

    LongLong(long a=0, long b=0):Pair(a, b){};
    LongLong(const LongLong&);
    ~LongLong();
    LongLong GetPair() const { return *this; }

    void SetPair(LongLong v) { *this = v; }

    LongLong& operator = (const LongLong&);
    operator string() const;

    friend ostream& operator << (ostream&, const LongLong&);
    friend istream& operator >> (istream&, LongLong&);

    friend bool operator==(const LongLong& l, const LongLong& f);
    friend bool operator!=(const LongLong& l, const LongLong& f);
    friend bool operator<(const LongLong& l, const LongLong& f);
};