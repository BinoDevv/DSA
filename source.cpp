#include "Vector.h"
#include "Vector.cpp"
#include "Vector_iterator.cpp"
#include "danhSach.cpp"
#include "hoadon.cpp"
#include "hang.cpp"

int main()
{
    Hang h;
    // h.doc_file();
    // h.ghi_file();
    // xuatds();
    // xuathd();

    int key, check1 = 0, check2 = 0;
    DanhSach x;
    HoaDon y;
    do
    {
        cout << "\n---------------------------------------------------------------------------";
        cout << "\n|                   Chon 1 trong 6 chuc nang sau:                         |";
        cout << "\n|    1.Doc file du lieu tufile input.txt                                  |";
        cout << "\n|    2.Ghi du lieu doc ra file output.txt                                 |";
        cout << "\n|    3.Hien thi Danh sach mat hang                                        |";
        cout << "\n|    4.Hien thi Hoa don mua ban hang                                      |";
        cout << "\n|    5.Nhap them mat hang                                                 |";
        cout << "\n|    6.Nhap them hoa don                                                  |";
        cout << "\n|    7.Thong ke so luong mat hang ton                                     |";
        cout << "\n|                                                                         |";
        cout << "\n|              --Hoac an '0' de thoat chuong trinh--                      |";
        cout << "\n---------------------------------------------------------------------------";
        cout << "\n\nChon yeu cau thu: ";
        cin >> key;
        switch (key)
        {
        case 1:
            h.doc_file();
            cout << "\nXong!!!\n";
            system("pause");
            system("cls");
            break;
        case 2:
            h.ghi_file();
            cout << "\nXong!!!\n";
            system("pause");
            system("cls");
            break;

        case 3:
            xuatds();
            system("pause");
            system("cls");
            break;
        case 4:
            xuathd();
            system("pause");
            system("cls");
            break;
        case 5:
            cin.ignore();
            do
            {
                check1 = 0;
                cout << "\nNhap thong tin mat hang:\n";
                // cin.ignore();
                cin >> x;
                for (DanhSach *it1 = v1.begin(); it1 != v1.end(); it1++)
                {
                    if ((*it1).getmh() == x.getmh())
                    {
                        cout << "\nMat hang da ton tai, hay nhap lai!\n";
                        check1 = 1;
                        break;
                    }
                }
                if (check1 == 0)
                    break;
            } while (1);
            v1.push_back(x);
            system("pause");
            system("cls");
            break;
        case 6:
            cin.ignore();
            do
            {
                check1 = 0;
                cout << "\nNhap thong tin hoa don:\n";
                cin >> y;
                for (HoaDon *it1 = v2.begin(); it1 != v2.end(); it1++)
                {
                    if ((*it1).getmhd() == y.getmhd())
                    {
                        cout << "\nMa hoa don da ton tai, hay nhap lai!\n";
                        cin.ignore();
                        check1 = 1;
                    }
                }
                if (check1 == 1)
                    continue;

                // Kiem tra ma hang
                check2 = 0;
                for (DanhSach *it1 = v1.begin(); it1 != v1.end(); it1++)
                {
                    if ((*it1).getmh() == y.getmh())
                    {
                        check2 = 1;
                        break;
                    }
                }
                if (check2 == 0)
                {
                    cout << "\nMa hang chua ton tai, hay nhap lai!\n";
                    continue;
                }

            } while (check1 == 1 && check2 == 0);

            // Tim so luong mat hang ton
            for (Ton *it1 = v3.begin(); it1 != v3.end(); it1++)
            {
                if ((*it1).getmh() == y.getmh())
                {
                    int sl = (*it1).getsl();
                    if (y.getlhd() == "ban")
                    {
                        if (sl >= y.getsl())
                        {
                            (*it1).setsl(sl - y.getsl());
                        }
                        else
                        {
                            cout << "\nMat hang khong du de ban!\n";
                        }
                    }
                    else
                    {
                        (*it1).setsl(sl + y.getsl());
                    }
                }
            }

            v2.push_back(y);
            system("pause");
            system("cls");
            break;
        case 7:
            xuatton();
            system("pause");
            system("cls");
            break;
        }

    } while (key != 0);
    return 0;
}
// mhd, mh, lhd, sl, day, price;