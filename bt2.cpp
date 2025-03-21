#include <iostream>

using namespace::std;

class CNgay
{
private:
    int Ngay;
    int Thang;
    int Nam;
public:
    void Nhap ();
    void Xuat ();
    CNgay ketiep ();
    int KTnamnhuan ();
    int sttTrongnam ();
    long stt ();
    void Khoitao (int, int);
    void Khoitao (long);
    CNgay (int d = 1, int t = 1, int y = 2000) : Ngay(d), Thang(t), Nam(y) {}
};

int main()
{
    CNgay D;
    D.Nhap();
    CNgay kq = D.ketiep();
    cout << "Ngày vừa nhập là: ";
    D.Xuat();
    cout << "Ngày tiếp theo là: ";
    kq.Xuat();
}

void CNgay:: Nhap()
{
    cout << "Mời nhập ngày: ";
    cin >> Ngay;
    cout << "Mời nhập tháng: ";
    cin >> Thang;
    cout << "Mời nhập năm: ";
    cin >> Nam;
}

void CNgay:: Xuat()
{
    cout << Ngay << "/" << Thang << "/" << Nam << "\n";
}


int CNgay:: KTnamnhuan()
{
    if (Nam % 4 == 0 && Nam % 100 != 0)
        return 1;
    if (Nam % 400 == 0)
        return 1;
    return 0;
}

int CNgay:: sttTrongnam()
{
    int Ngaythang [12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (KTnamnhuan() == 1)
        Ngaythang [1] = 29;
    int stt = 0;
    for (int i = 0; i < Thang - 1; i++)
        stt = stt + Ngaythang [i];
    return (stt + Ngay);
}

long CNgay:: stt()
{
    long stt = 0;
    for (int i = 1; i < Nam; i++)
    {
        CNgay temp (1,1,i);
        stt = stt + 365;
        if (temp.KTnamnhuan() == 1)
            stt = stt + 1;
    }
    return stt + sttTrongnam();
}

void CNgay:: Khoitao(int nam, int stt)
{
    int Ngaythang [12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    CNgay temp (1, 1, nam);
    if (temp. KTnamnhuan() == 1)
        Ngaythang [1] = 29;
    temp.Thang = 1;
    while (stt - Ngaythang[temp.Thang -1] > 0)
    {
        stt = stt - Ngaythang[temp.Thang -1];
        temp.Thang ++;
    }
    temp.Ngay = stt;
    *this = temp;
}

void CNgay:: Khoitao(long stt)
{
    int nam = 1;
    int songay = 365;
    while (stt - songay > 0)
    {
        stt = stt - songay;
        nam ++;
        songay = 365;
        CNgay temp (1,1,nam);
        if (temp.KTnamnhuan() == 1)
            songay = 366;
    }
    Khoitao(nam, (int) stt);
}

CNgay CNgay:: ketiep()
{
    long sott = stt();
    sott = sott + 1;
    CNgay temp;
    temp. Khoitao(sott);
    return temp;
}


