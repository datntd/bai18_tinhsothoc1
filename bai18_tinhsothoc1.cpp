#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	cout << "TINH SO TREN BAN VUA\n";
	int so0;
	double tongthoc = 0;
	cout << "nhap so o:"; cin >> so0;
	cout.imbue(locale("en_us_UFT-8")); //phan nghin
	if (so0 > 64); {
		cout << "tren ban do chi co 64o, vui long nhap so<=64\n";
		system("pause");
		return 0;
		do
		{
			cout << "nhap so o:"; cin >> so0;
		} while (so0 > 64 || so0 < 0);
	}
		for (int i = 0; i < so0; i++)
		{
			cout << "o thu" << i + i << "co\t\t" << fixed << setprecision(0) << pow(2, i) << "hat thoc\n";
			tongthoc = tongthoc + pow(2, i);
		}
		cout << "tong so thoc la:\t" << "hat thoc\n";
		return 0;
	}