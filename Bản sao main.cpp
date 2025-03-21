#include <iostream>
//dachinhsua1dong
using namespace::std;
class CPhanso
{
private:
    int Tuso;
    int Mauso;
public:
    void Nhap();
    void Xuat();
    int Xetdau();
};

int main ()
{
    CPhanso a;
    a.Nhap();
    a.Xuat();
    int KQ = a.Xetdau();
    switch (KQ)
    {
        case 1:
            cout << "Phân số là dương" << "\n";
            break;
        case -1:
            cout << "Phân số là âm" << "\n";
            break;
        case 0:
            cout << "Phân số bằng 0" << "\n";
            break;
    }
}

void CPhanso :: Nhap()
{
    cout << "Mời nhập tử số: ";
    cin >> Tuso;
    cout << "Mời nhập mẫu số: ";
    cin >> Mauso;
}

void CPhanso :: Xuat()
{
    cout << "Tử số là: " << Tuso << "\n";
    cout << "Mẫu số là: " << Mauso << "\n";
}

int CPhanso :: Xetdau()
{
    if (Tuso*Mauso > 0)
        return 1;
    if (Tuso*Mauso < 0)
        return -1;
    return 0;
}

