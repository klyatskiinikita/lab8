#include <iostream> 
#include <iomanip> 
#include "windows.h"

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int lim_m_size = 0, count_0 = 0, i, j;
	const int n = 10;
		int m[n];
		cout << "������ �������� ������:" << endl;
		for (i = 0; i < n; i++)
		{
			cout << "m[" << i + 1 << "] = ";
			cin >> m[i];
		}
		cout << "\n�������� ������: \n";
		for (i = 0; i < n; i++)
		{
			cout << setw(10) << m[i] << endl;
		}
		for (i = 0; i < n; i++)
		{
			if (m[i] > 15.6 && m[i] < 75)
			{
				lim_m_size++;
			}
			if (m[i] == 0)
			{
				count_0++;
			}
		}
		int* lim_m = new int(lim_m_size);

		j = 0;
		while (j < lim_m_size)
		{
			for (i = 0; i < n; i++)
			{
				if (m[i] < 75 && m[i] > 15.6)
				{
					lim_m[j] = m[i];
					j++;
				}
			}
		}
		cout << "\n�������� ������, ���������� � �������� �������, �� ����� �� 15.6 � ����� �� 75: \n";
		if (lim_m_size != 0)
		{
			for (j = 0; j < lim_m_size; j++)
			{
				cout << setw(10) << lim_m[j] << endl;
			}
		}
		else
		{
			cout << "����� �� ����" << endl;
		}
		cout << "\n��������, �� ��������� 0 - " << count_0 << endl;
	system("pause");
	return 0;
}
