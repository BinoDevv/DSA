#include <bits/stdc++.h>
#ifndef __ton__cpp
#define __ton__cpp
using namespace std;

class Ton
{
private:
    string mh;
    int sl;

public:
    Ton()
    {
        ;
    };
    Ton(string mh, int sl);
    friend istream &operator>>(istream &is, Ton &p);
    friend ostream &operator<<(ostream &os, Ton p);
    int getsl();
    string getmh();
    void setmh(string);
    void setsl(int);
};

ostream &operator<<(ostream &os, Ton p)
{
    os << "| " << setw(10) << left << p.mh
       << "| " << setw(10) << left << p.sl
       << "| " << endl;
    return os;
}
int Ton::getsl()
{
    return this->sl;
}
void Ton::setsl(int s)
{
    this->sl = s;
}

void Ton::setmh(string s)
{
    this->mh = s;
}

string Ton::getmh()
{
    return this->mh;
}

#endif
