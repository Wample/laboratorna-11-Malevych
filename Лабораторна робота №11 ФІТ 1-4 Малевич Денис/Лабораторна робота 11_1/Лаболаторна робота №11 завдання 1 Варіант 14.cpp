#include <iostream>
#include <Windows.h>
#include <math.h>
#include <stdio.h>
#include <cmath>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int f;
	cout << "Введіть номер місяця" << "\n";
	cout << "1) Січень 2) Лютий 3) Березень 4) Квітень  5)Травень  6) Червень 7)Липень 8)Серпень 9) Вересень 10) Жовтень 11) Листопад12) Грудень" << "\n";
	cin >> f;
	switch (f){
	case 1:
		cout << "Січень" << "\nПерший квртал";
		break;
	case 2:
		cout << "Лютий" << "\nПерший квартал";
		break;
	case 3:
		cout << "Березень" << "\nДругий квартал";
		break;
	case 4:
		cout << "Квітень" << "\nДругий квартал";
		break;
	case 5:
		cout << "Травень" << "\nДругий квартал";
		break;
	case 6:
		cout << "Червень" << "\nТретій квартал";
		break;
	case 7:
		cout << "Липень" << "\nТретій квартал";
		break;
	case 8:
		cout << "Серпень" << "\nТретій квартал";
		break;
	case 9:
		cout << "Вересень" << "\nЧетвертий квартал";
		break;
	case 10:
		cout << "Жовтень" << "\nЧетвертий квартал";
		break;
	case 11:
		cout << "Листопад" << "\nЧетвертий квартал";
		break;
	case 12:
		cout << "Грудень" << "\nПерший квартал";
		break;



	default:
		cout << "Такого місяця не знаю :("<<endl;
	}
	return 0;

}
