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
    cout << "Введіть x рівняння A: ";
    cin >> Xa;
    cout << "Введіть y рівняння A: ";
    cin >> Ya;
    cout << "Введіть z рівняння A: ";
    cin >> Za;
    decision1 = equation1(Xa, Ya, Za);
    if (decision1 >= 0 || decision1 < 0)
    {
        cout << "А = " << decision1 << " = " << int(decision1) << endl;
    }
    else
    {
        cout << "Умова рівняння A не задовільняє ОДЗ" << endl;
    }
    double Xb, Yb, Zb, Ab, decision2;
    cout << "Введіть x рівняння B: ";
    cin >> Xb;
    cout << "Введіть y рівняння B: ";
    cin >> Yb;
    cout << "Введіть z рівняння B: ";
    cin >> Zb;
    cout << "Введіть a рівняння B: ";
    cin >> Ab;
    decision2 = equation2(Xb, Yb, Zb, Ab);
    if (decision2 >= 0 || decision2 < 0)
    {
        cout << "B = " << decision2 << " = " << int(decision2) << endl;
    }
    else
    {
        cout << "Умова рівняння B не задовільняє ОДЗ" << endl;
    }
    int decision3A, decision3B;
    decision3A = equation3(int(decision1));
    cout << "Сума розрядів числа A = " << decision3A << endl;
    decision3B = equation3(int(decision2));
    cout << "Сума розрядів числа B = " << decision3B << endl;
    cout << "Сума сум розрядів чисел A і B: " << decision3A + decision3B << endl;
    return 0;
    system("pause");
}