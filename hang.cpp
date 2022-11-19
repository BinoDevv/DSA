#include "Vector.h"
#include "Vector.cpp"
#include "Vector_iterator.cpp"
#include "danhSach.cpp"
#include "hoadon.cpp"
#include "ton.cpp"

#ifndef __hang__cpp__
#define __hang__cpp__

Vector<DanhSach> v1;
Vector<HoaDon> v2;
Vector<Ton> v3;

class Hang
{
public:
    void doc_file();
    void ghi_file();
    void so_luong_mat_hang();
    friend ostream &operator<<(ostream &os, Hang p);
};

void Hang::doc_file()
{
    ifstream filein;
    filein.open("input.txt", ios_base::in);
    int n;
    filein >> n;
    filein.ignore();
    DanhSach x;
    for (int i = 1; i <= n; i++)
    {
        filein >> x;
        v1.push_back(x);
    }
    int m;
    filein >> m;
    filein.ignore();
    HoaDon k;
    Ton t;
    for (int i = 1; i <= m; i++)
    {
        filein >> k;
        // int check = 0;
        // for (Ton *it1 = v3.begin(); it1 != v3.end(); it1++)
        // {
        //     if (k.getmh() == (*it1).getmh())
        //     {
        //         if()
        //     }
        // }

        t.setmh(k.getmh());
        t.setsl(k.getsl());

        v2.push_back(k);
        v3.push_back(t);
    }
}

void Hang::ghi_file()
{
    fstream f;
    f.open("output.txt", ios::out);
    f << "***********************************************************************************************\n"
      << setw(35) << right << "DANH SACH MAT HANG" << endl;
    f << "---------------------------------------------------------\n";
    f << "| " << setw(10) << left << "Ma hang"
      << "| " << setw(20) << left << "Ten hang"
      << "| " << setw(20) << left << "Nha san xuat"
      << "|" << endl;
    f << "---------------------------------------------------------\n";

    for (auto &it : v1)
    {
        f << it;
    }
    f << "---------------------------------------------------------\n\n";
    f << setw(50) << right << "HOA DON MUA BAN HANG" << endl;
    f << "---------------------------------------------------------------------------------------\n";
    f << "| " << setw(12) << left << "Ma hoa don"
      << "| " << setw(10) << left << "Ma hang"
      << "| " << setw(14) << left << "Loai hoa don"
      << "| " << setw(10) << left << "So luong"
      << "| " << setw(15) << left << "Ngay mua ban"
      << "| " << setw(13) << left << "Gia mua ban"
      << "| " << endl;
    f << "---------------------------------------------------------------------------------------\n";

    for (auto &it : v2)
    {
        f << it;
    }
    f << "---------------------------------------------------------------------------------------\n\n";
}

void xuatds()
{
    cout << setw(35) << right << "DANH SACH MAT HANG" << endl;
    cout << "---------------------------------------------------------\n";
    cout << "| " << setw(10) << left << "Ma hang"
         << "| " << setw(20) << left << "Ten hang"
         << "| " << setw(20) << left << "Nha san xuat"
         << "|" << endl;
    cout << "---------------------------------------------------------\n";
    for (DanhSach *it1 = v1.begin(); it1 != v1.end(); it1++)
    {
        cout << *it1;
    }
    cout << "---------------------------------------------------------\n";
}

void xuathd()
{
    cout << setw(50) << right << "HOA DON MUA BAN HANG" << endl;
    cout << "---------------------------------------------------------------------------------------\n";
    cout << "| " << setw(12) << left << "Ma hoa don"
         << "| " << setw(10) << left << "Ma hang"
         << "| " << setw(14) << left << "Loai hoa don"
         << "| " << setw(10) << left << "So luong"
         << "| " << setw(15) << left << "Ngay mua ban"
         << "| " << setw(13) << left << "Gia mua ban"
         << "| " << endl;
    cout << "---------------------------------------------------------------------------------------\n";

    for (HoaDon *it2 = v2.begin(); it2 != v2.end(); it2++)
    {
        cout << *it2;
    }
    cout << "---------------------------------------------------------------------------------------\n";
}

void xuatton()
{
    cout << setw(15) << right << "HANG TON" << endl;
    cout << "-------------------------\n";
    cout << "| " << setw(10) << left << "Ma hang"
         << "| " << setw(10) << left << "So Luong"
         << "| " << endl;
    cout << "-------------------------\n";

    for (Ton *it2 = v3.begin(); it2 != v3.end(); it2++)
    {
        cout << *it2;
    }
    cout << "-------------------------\n";
}

#endif