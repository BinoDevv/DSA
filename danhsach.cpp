#include <bits/stdc++.h>
#ifndef __danhsach__cpp__
#define __danhsach__cpp__

using namespace std;

class DanhSach
{
private:
    string mh, th, nsx;

public:
    DanhSach()
    {
        ;
    };
    DanhSach(string mh, string th, string nsx);
    friend istream &operator>>(istream &is, DanhSach &p);
    friend ostream &operator<<(ostream &os, DanhSach p);
    string getmh();
    friend void display();
};

istream &operator>>(istream &is, DanhSach &p)
{
    // cout << "\nNhap ma hang: ";
    getline(is, p.mh);
    // cout << "\nNhap ten hang: ";
    getline(is, p.th);
    // cout << "\nNhap nha san xuat: ";
    getline(is, p.nsx);
    return is;
}

ostream &operator<<(ostream &os, DanhSach p)
{
    os << "| " << setw(10) << left << p.mh
       << "| " << setw(20) << left << p.th
       << "| " << setw(20) << left << p.nsx
       << "|" << endl;
    return os;
}
string DanhSach::getmh()
{
    return this->mh;
}

#endif
