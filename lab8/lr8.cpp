#include <iostream>
#include <iomanip>
#include "windows.h"
#define _USE_MATH_DEFINES
#include "math.h" 
using namespace std;
double equation1(double, double, double);
double equation2(double, double, double, double);
int equation3(int);
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double Xa, Ya, Za, decision1;
    cout << "������ x ������� A: ";
    cin >> Xa;
    cout << "������ y ������� A: ";
    cin >> Ya;
    cout << "������ z ������� A: ";
    cin >> Za;
    decision1 = equation1(Xa, Ya, Za);
    if (decision1 >= 0 || decision1 < 0)
    {
        cout << "� = " << decision1 << " = " << int(decision1) << endl;
    }
    else
    {
        cout << "����� ������� A �� ���������� ���" << endl;
    }
    double Xb, Yb, Zb, Ab, decision2;
    cout << "������ x ������� B: ";
    cin >> Xb;
    cout << "������ y ������� B: ";
    cin >> Yb;
    cout << "������ z ������� B: ";
    cin >> Zb;
    cout << "������ a ������� B: ";
    cin >> Ab;
    decision2 = equation2(Xb, Yb, Zb, Ab);
    if (decision2 >= 0 || decision2 < 0)
    {
        cout << "B = " << decision2 << " = " << int(decision2) << endl;
    }
    else
    {
        cout << "����� ������� B �� ���������� ���" << endl;
    }
    int decision3A, decision3B;
    decision3A = equation3(int(decision1));
    cout << "���� ������� ����� A = " << decision3A << endl;
    decision3B = equation3(int(decision2));
    cout << "���� ������� ����� B = " << decision3B << endl;
    cout << "���� ��� ������� ����� A � B: " << decision3A + decision3B << endl;
    return 0;
    system("pause");
}