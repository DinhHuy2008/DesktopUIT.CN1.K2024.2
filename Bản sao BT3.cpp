#include <iostream>
#include <cmath>


using namespace::std;

class CDiem
{
private:
    float x;
    float y;
    float z;
public:
    void Nhap();
    void Xuat();
    float Khoangcach(CDiem);
};

int main ()
{
    CDiem A, B;
    cout << "Nhập toạ độ điểm A: " << "\n";
    A.Nhap();
    cout << "Nhập toạ độ điểm B: " << "\n";
    B.Nhap();
    float KQ = A.Khoangcach(B);
    cout << "Toạ độ điểm A" << "\n";
    A.Xuat();
    cout << "Toạ độ điểm B" << "\n";
    B.Xuat();
    cout << "Khoảng cách giữa 2 điểm là: " << KQ ;
}

void CDiem:: Nhap()
{
    cout << "Mời nhập toạ độ x: ";
    cin >> x;
    cout << "Mời nhập toạ độ điểm y: ";
    cin >> y;
    cout << "Mời nhập toạ độ điểm z: ";
    cin >> z;
}

void CDiem:: Xuat()
{
    cout << "Toạ độ điểm: " << "(" << x << "," << y << "," << z << ")" << "\n";
}

float CDiem:: Khoangcach(CDiem P)
{
    return sqrt ((x - P.x)*(x - P.x)
                +(y - P.y)*(y - P.y)
                +(z - P.z)* (z- P.z));
}
